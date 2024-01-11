#include<stdio.h>
# define n 5
int queue[n];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{  
  int choice;
  printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
  do
  {
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
         enqueue();
         break;
      case 2:
         dequeue();
         break;
      case 3:
         display();
         break;
      case 4:
                printf("\n\t EXIT POINT ");
                break;
      default:
         printf("enter valid choice");
         break;
    }
  }while(choice!=4);
}
void enqueue()
{
  int x;
  printf("enter the element to be pushed:");
  scanf("%d",&x);
  if(rear==-1&&front==-1)
  {
    rear=0;
    front=0;
    queue[rear]=x;
  }
  else if(rear==n-1)
  {
    printf("queue is full");
  }
  else
  {
    rear++;
    queue[rear]=x;
  }
}
void dequeue()
{
  if(front==-1||front>rear)
  {
    printf("queue is empty");
  }
  else
  {
    if(front==rear)
    {
  printf("The deleted element %d",queue[front]);
    rear=-1;
    front=-1;
  
    }
    else
    {
      printf("The deleted element %d",queue[front]);
      front++;
    }
  }  
}
void display()
{
  if(rear==-1)
  {
    printf("queue is empty");
  }
  else
  {
    for(int i=front;i<=rear;i++)
    printf("The element in the queue: %d\n",queue[i]);
    
  }
}
