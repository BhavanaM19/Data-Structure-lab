#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void enqueue();
void dequeue();
void display();
int a[SIZE];
int rear=-1;
int front=-1;
void main()
{
int ch;
while(1)
{
printf("1.Enqueue\n2.Dequeue\n3.display\n4.exit\n");
printf("enter the choice :");
scanf("%d",&ch);
switch (ch)
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
exit(0);
default:
printf("\n Incorrect choice \n");
}
}
}
void enqueue()
{
int insert_item;
if (rear == SIZE- 1)
printf("Overflow \n");
else
{
if (front == - 1)
front = 0;
printf("Element to be inserted in the Queue\n : ");
scanf("%d", &insert_item);
rear = rear + 1;
a[rear] = insert_item;
}
} 
void dequeue()
{
if(front==-1)
{
printf("underflow");
}
else
{
printf("Element deleted from the Queue\n");
front = front + 1;
}
}
void display()
{
int i;
if (front == -1)
printf("Empty Queue \n");
else
{
printf("\n Queue: \n");
 for ( i = front; i <= rear; i++)
printf("%d ",a[i]);
 printf("\n");
 }
} 
