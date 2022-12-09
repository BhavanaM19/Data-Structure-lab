#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("\n enter the size of STACK[MAX=100]:");
scanf("%d",&n);
printf("\n\t STACK OPERATIONS USING ARRAY");
printf("\n\t----------------------------------------------");
printf("\n1.push\n 2.pop\n 3.display\n4.exit\n");
do
{
printf("\nenter the choice");
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
printf("EXIT");
break;
}
default:
{
printf("\nplease enter a valid choice(1/2/3/4)");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\t stack is overflow");
}
else
{
printf("enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if (top<=-1)
{
printf("\nstack is underflow");
}
else
{
printf("The popped elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("element in stack is:");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
else
{
printf("\n stack is empty");
}
} 


