#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *l;
struct node *r;
};


struct node *new(int a)
{
struct node *temp=(struct node *) malloc(sizeof(struct node));
temp->data=a;
temp->l=temp->r=NULL;
return temp;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->l);
printf("%d",root->data);
inorder(root->r);
}
}



struct node* insert (struct node *node,int data)
{

if (node==NULL)
return new(data);
if(data<node->data)
node->l=insert(node->l,data);
else
node->r=insert (node->r,data);
return node;
}

struct node *minnode(struct node *node)
{
struct node *current =node;
while(current &&current->l!=NULL)
current =current->l;
return current;
}

struct node *deletenode(struct node *root,int data)
{
if(root==NULL)
return root;
if(data<root->data)
root->l=deletenode(root->l,data);
else if(data>root->data)
root->r=deletenode(root->r,data);
else
{
if(root->l==NULL)
{
struct node *temp=root->r;
free(root);
return temp;
}
else if(root->r==NULL)
{
struct node *temp=root->l;
free (root);
return temp;
}

struct node *temp=minnode(root->r);
root->data=temp->data;
root->r=deletenode(root->r,temp->data);
}
return root;
}

int main()
{
struct node *root=NULL;
root=insert(root , 4);
root=insert(root , 3);
root=insert(root , 5);
root=insert(root , 6);
root=insert(root , 9);
root=insert(root ,  34);
root=insert(root , 12);
printf("inorder traversal: \n ");
inorder(root);
printf("after deleteing the node 34 \n");
root=deletenode(root,34);
printf("inorder traversal :");
inorder(root);
}
