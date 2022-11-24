#include<stdio.h>
void main()
{
int a[20 ],n,key,i,f;
printf("enter the range");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("elements found");
}
else
{
printf("element not found");
}
}

