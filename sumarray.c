#include<stdio.h>
void main()
{
int sum=0,a[50],n,i;
printf("enter size of the array:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the sum of elements is an array%d",sum);
}

