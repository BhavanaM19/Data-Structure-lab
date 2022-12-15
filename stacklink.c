#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node*next;
};
struct node*head;
void main()
{
int choice=0;
printf("\n stack operations using linked list\n");
while(choice!=4)
{
printf("\n1.push\n2.pop\n3.display\n4.exit");
printf("\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exit");
break;
}
default:
{
printf("enter a valid choice");
}
}
};
}
void push(){
int val;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("not able to push the element");
}
else
{
printf("enter a value to be pushed:");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("item pushed");
}
}
void pop()
{
int item;
struct node*ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
item=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("item popped");
}
}
void display()
{
int i;
struct node*ptr;
ptr=head;
if(ptr==NULL)
{
printf("stack is empty \n");
}
else
{
printf("printing stack elememts \n");
while(ptr!=NULL)
{
printf("%d\n",ptr->val);
ptr=ptr->next;
}
}
}

