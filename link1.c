#include<stdio.h>
#include<stdlib.h>


//insert(int , int *);

struct node
{
int info;
struct node *link;
};
void display (struct node *);
struct node* insert( int, struct node *);
struct node* insert_last(int , struct node *);
struct node* insord(int ,struct node *);
struct node* delete(int ,struct node *);
struct node* count_nodes(struct node *);
struct node* copy(struct node *);

void main()
{
struct node *first;
struct node *last;
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
printf("2gcc.to insert element at starting\n");
printf("3.to insert element at last\n");
printf("4.to insert element in order\n");
printf("5.to delete an element \n");
printf("6.to count the nodes\n");
printf("7.to copy the link list\n");
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
insert( m,first);
break;
case 3:
printf("\n enter the element for last position ");
scanf("%d",&m);
 insert_last(m,first);
break;
case 4:
printf("\n enter the element to insert in order ");
scanf("%d",&m);
insord(m,first);
break;
case 5:
printf("\n which node you want to delete ");
scanf("%d",&m);
delete(m,first);
break;
case 6:
printf("\n to know how many nodes is present ");
scanf("%d",&m);
count_nodes(first);
break;
case 7:
printf("\n to copy the link list ");
scanf("%d",&m);
copy(m,first,last);
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

struct node* insert(int x,struct node *first)
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
new->link=NULL;
return new;
}
else{
new->link=first;
return new;
}
}

}

struct node* insert_last(int x, struct node *first)
{
struct node *new;
struct node *save;
//int x;
new=(struct node *)malloc(sizeof(struct node));
if (new==NULL)
{
printf("underflow\n");
}
else
{
new=first;
//first=link->first;
info->new=x;
link->new=NULL;
if(first=NULL)
{return(new);
}
else 
save=first;
while(link->save!=NULL)
{
save=link->save;
}
link->save=new;

return first;
}
}
struct node* insord(int x,struct node *first)
{
struct node *new;
struct node *save;
int x;
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

struct node* delete(int x,struct node *first)
{ 
//struct node *first;
struct node *save;
struct node *pred;
int x;
if(first==NULL)
{
printf("underflow\n");
}
else
{
save=first;
}
while(save!=x && link->save!=NULL)
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
}
else
{
link->pred=link->x;
}

free x;
}
}
 
struct node* count_nodes(struct node *first) 
{
//struct node *first;
struct node *save;
int count;
if(first==NULL)
{
count=0;
return count;
}
else
{
save=first;
while(link->save!=NULL)
{
save=link->save;
count=count+1;
return count;
}
}
}
struct node* copy(struct node *first)
{
struct node *new;
//struct node *first;
struct node *save;
struct node *field;
struct node *ptr
struct node *begin;
struct node *pred;
new=(struct node *)malloc(sizeof(struct node));
begin=(struct node *)malloc(sizeof(struct node));
//int *field,*ptr,;

if(first==NULL)
{
return NULL;
}
if (first==NULL)
{
printf("Underflow\n");
}
else{
new=first;
first=link->first;
field->new=info->first;
begin=new;}

else
{
save=first;
}
while(link->save!=NULL)
{
pred=new;
save=link->save;
if(begin=NULL)
{
printf("underflow\n);
return 0;
}
else
{
new=begin;
begin=link->begin;
field->new=info->save;
ptr->pred=new;

}
ptr->new=NULL;
retrun(begin);
}]





