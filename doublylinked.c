#include<stdio.h>
#include<stdlib.h>


struct node
{
int info,lptr,rptr;
struct node *link;
};

void display(struct node *);

struct node* dou_ins(struct node *,struct node *, struct node *,int );
struct node*   dou_del(struct node *, struct node *,int );

void main()
{
struct node *first,*second,*third;
//struct node *last;
first= (struct node *)malloc(sizeof(struct node));
first->info=30;
first->link=second;
second->info=40;
second->link=third;
third->info=50;
third->link=NULL;

//first=NULL;
display(first);
//first=insert(35,first);
//first=insert(40,first);
printf("after the insertion\n");
display(first);
dou_ins(50);
display(first);
dou_del(50);

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
struct node* dou_ins(struct node *,struct node *, struct node *,int x)
{
struct node *new;
struct node *lptr;
struct node *rptr;
struct node *m;
new=(struct node *)malloc(sizeof(struct node));
info->new=x;
if(r==NULL)
{
lptr->new=NULL;
rptr->new=NULL;
l=r=new;
return new;
}
else 
if(m==l)
{
lptr->new=NULL;
rptr->new=m;
lptr->m=new;
l=new;
return new;
}
else
{
lptr->new=lptr->m;
rptr->new=m;
lptr->m=new;
rptr->lptr->new=new;
return new;
}
}

struct node* dou_del(struct node *l, struct node *r,int old)
{
if(r==NULL)
{
printf("underflow\n");
}else 
{
l==r;
}
else if(old==l)
{
l=rptr->l;
lptr->l=NULL;
}
else if(old==r)
{
r=lptr->r;
rptr->r=NULL;
}

else
{
rptr->lptr->old=rptr->old;
lptr->rptr->old=lptr->old;
}
free old;
}
