#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};

void display (struct node *);
//struct node* insert( int, struct node *);
struct node* insert(int x,struct node *,struct node * );
struct node* cir_ins_last(int ,struct node *,struct node * );
struct node* insord(int x,struct node *,struct node *);
struct node* delete(int x,struct node *,struct node *);



void main()
{
struct node *first;
//first= (struct node *)malloc(sizeof(struct node));
first=NULL;
display(first);
first=insert(35,first);
first=insert(40,first);
printf("after the insertion\n");
display(first);

int choice,n,m,position,i;
//start=NULL;
while(1)
{
printf("1.create list\n");
printf("2.to insert element at starting\n");
printf("3.to insert element at last\n");
printf("4.to insert element in order\n");
printf("5.to delete an element \n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n how many nodes you want to create");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the elements ");
scanf("%d",&m);
list(m);
}
break;
case 2:
printf("\n enter the element for inserting at starting ");
scanf("%d",&m);
insertbeg(m);
break;
case 3:
printf("\n enter the element for last position ");
scanf("%d",&m);
insertbeg(m);
break;
case 4:
printf("\n enter the element to insert in order ");
scanf("%d",&m);
insertbeg(m);
break;
case 5:
printf("\n which node you want to delete ");
scanf("%d",&m);
insertbeg(m);
break;
default:
printf("\n wrong choice");
}
}
}
void display(struct node *first)
{
struct node *save;
save=first;
while(save!=NULL)
{
printf("%d",save->info);
save=save->link;
}

}

struct node* insert(int x,struct node *first,struct node *last )
{
struct node *new;
//struct node *first;
new=(struct node *)malloc(sizeof(struct node));
if(new==NULL)
{
printf("underflow\n");
}
else 
{ 
if(first==NULL)
{
new->link=new;
first=last=new;
return new;
}
else{
link->new=first;
link->last=new;
first=new;
return first;
}
}
}
struct node* cir_ins_last(int x,struct node *first,struct node *last )
{
struct node *new;
new=(struct node *)malloc(sizeof(struct node));
info->new=x;
link->new=first;
link->last=new;
last=new;
}

struct node* insord(int x,struct node *first,struct node *last)
{
struct node *new;
struct node *save;
new=(struct node *) malloc(sizeof(struct node));
new->info=x;
new->link=NULL;
if(new==NULL)
{
printf("underflow\n");
}
else
new = first;
first=link->first;
info->new=x;
if(first==NULL)
{
link->new=NULL;
return new;
}
if(info->new<=info->first)
{
link->new=first
return new;
}
save=first;
while(link->save)!=NULL && info->new>=info->link->save))
{
save=link->save;
}
link->new=link->save;
link->save=new;
return first;

if(info->new<=info->first)
{
link->new=first
return new;
}

struct node* delete(int x,struct node *first,struct node *last)
{ 
//struct node *first;
struct node *save;
struct node *pred;
struct node *last;
//int x;
if(first==NULL)
{
printf("linked list is empty\n");
return NULL;
}
else
{
save=first;
}
while(save!=x && link->save!=last)
{
pred=save;
save=link->save;
if (save!=x)
{
printf("node not found\n");
return first;
}
if (x==first)
{
first=link->first;
link->last=first;
}
else
{
link->pred=link->x;
if(x==last)
{
last=pred;
}

free x;
}
}
