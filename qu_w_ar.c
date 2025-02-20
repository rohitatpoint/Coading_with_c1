#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue[MAX];
int f=-1,r=-1;
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
    int n=MAX;
    if(f==(r+1)%n)
    printf("Overflow Queue:");
    else{ 
    if((r==-1)&&(f==-1))       
    {
    r=0;
    f=0;
    }
    else
    r=(r+1)%n;
    }
    queue[r]=item;
}
void Dqueue()
{
    int n=MAX;
    if((r==-1)&&(f==-1))
    printf("Underflow stack:");
    else
    {
        if(r==f)
        {
            r=-1;
            f=-1;
        }
        else
        f=(f+1)%n;
    };
}
void dis_all()
{
    int n=MAX,j=f;
    if((r==-1)&&(f==-1))
    printf("No eliment into queue  :");
    else
    {
      do{
      printf("%d ",queue[j]);  
      j=(j+1)%n;}while(j!=r+1);
    }
}
void dis_front()
{
 if((r==-1)&&(f==-1))
    printf("No eliment into queue  :");
    else
    {
      printf("%d ",queue[f]);  
    }
}
void dis_rear()
{
 if((r==-1)&&(f==-1))
    printf("No eliment into queue  :");
    else
    {
      printf("%d ",queue[r]);  
    }
}
void is_empty()
{
    if((r==-1)&&(f==-1))
    printf("queue is empty\n");
    else
    printf("queue is not empty:\n");
}