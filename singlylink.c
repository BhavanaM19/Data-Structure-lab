#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
};
struct node*header=NULL;
void insertfirst()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
printf("\n no space");
else
{
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(header==NULL)
header=ptr;
else
{
ptr->link=header;
header=ptr;
}
printf("\n%d inserted into the list",ptr->data);
}
}
void insertlast()
{
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
temp=header;
if(ptr==NULL)
printf("\n no space available");
else
{
while(temp->link!=NULL)
temp=temp->link;
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
temp->link=ptr;
printf("\n%d inserted",ptr->data);
}
}
void insertlocation()
{
int key;
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
printf("\n enter the value of the node after which the new node to be inserted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
temp=temp->link;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("the %d value not exist",key);
return;
}
if(temp->data==key)
{
if(ptr==NULL)
printf("\n no space");
else
{
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->link=temp->link;
temp->link=ptr;
printf("\n%d inserted after %d",ptr->data,key);
}
}
}
void deletefirst()
{
struct node*temp;
temp=header;
header=temp->link;
printf("%d deleted",temp->data);
free(temp);
}
void deletelast()
{
struct node*temp,*p;
temp=header;
while(temp->link!=NULL)
{
p=temp;
temp=temp->link;
}
printf("%d deleted",temp->data);
free(temp);
p->link=NULL;
}
void deletelocation()
{
struct node*temp,*p;
int key;
printf("\n enter the value of the node to be deleted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
p=temp;
temp=temp->link;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("the %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("%d deleted",temp->data);
if(temp==header)
{
p=header;
header=temp->link;
free(p);
}
else
{
p->link=temp->link;
free(temp);
}
}
}
void search()
{
struct node*temp;
int key,pos=0;
temp=header;
printf("\n enter the element to be searched");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->link;
pos++;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("\n the %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("\n%d is available in location %d",key,pos+1);
}
}
void display()
{
struct node *p;
if(header==NULL)
printf("list is empty");
else
{
printf("\n elements in list are:");
p=header;
while(p!=NULL)
{
printf("\t%d",p->data);
p=p->link;
}
}
}
void main()
{
int choice;
printf("\n SINGLY LINKEDLIST\n");
do
{
printf("\n1.insert in beginning \n2.insert at last \n3.insert at any random location \n4.delete from beginning \n5.delete from last \n6.delete node after specified location \n7.search for an element \n8.display \n9.exit");
printf("\n enter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertfirst();
break;
case 2:
insertlast();
break;
case 3:
insertlocation();
break;
case 4:
deletefirst();
break;
case 5: 
deletelast();
break;
case 6:
deletelocation();
break;
case 7:
search();
break;
case 8:
display();
break;
case 9:
exit(0);
default:
printf("\n invalid option");
}
}
while(choice!=9);
}


