#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
void Enqueue(int item);
void  Dqueue();
void dis_all();
void dis_front();
void dis_rear();
void is_empty();
int main()
{
    int choice,i=1;
    printf("Your choices:\n");
    printf("0. for exit: \n ");
    printf("1. ENQUEUE\n ");
    printf("2. DQUEUE\n ");
    printf("3. print all eliment \n ");
    printf("4. print FRONT of queue \n ");
    printf("5.print REAR of queue\n ");
    printf("6. check for empty \n ");
    while(i!=0)
    {
    printf("Enter your choice: \n ");
    scanf("%d",&choice);   
    switch(choice)
    {
    case 0:
    i=0;
    dis_all();
    break;    
    case 1: 
     printf("Enter inserted eliment:");
    int item;
    scanf("%d",&item);  
    Enqueue(item);
    break;
    case 2:
    Dqueue();
    break;
    case 3:
    dis_all();
    break;
    case 4:
    dis_front();
    break;
    case 5:
    dis_rear();
    break;
    case 6:
    is_empty();
    break;
    }}
    return 0;
}
void Enqueue(int item)
{
     struct node *n;
     n=(struct node *)malloc(sizeof(struct node));
     n->data=item;
     n->link=NULL;
     if(start==NULL)
     {
        start=n;
     }
     else{
     struct node *p=start;
     while(p->link!=NULL)
     p=p->link;
     p->link=n;}
}
void Dqueue()
{
     if(start==NULL)
    printf("queue is empty:");
    else{
    struct node *p=start;
    start=start->link;
    free(p);}
}
void dis_all()
{
     if(start==NULL)
    printf("queue is empty:");
    else{
    struct node *p=start;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }}
}
void dis_front()
{
    if(start==NULL)
    printf("stack is empty:");
    else{
   struct node *p=start;
   printf("%d ",start->data);}
}
void dis_rear()
{
    if(start==NULL)
    printf("queue is empty:");
    else{  
        struct node *p=start;
        while(p->link!=NULL)
        p=p->link;
        printf("%d ",p->data);}
}
void is_empty()
{
    if(start==NULL)
    printf("queue is empty:");
    else
    printf("queue is not empty:");
}