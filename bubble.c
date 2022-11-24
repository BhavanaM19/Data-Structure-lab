#include<stdio.h>
void main()
{
int a[15],n,i,j,temp;
printf("enter the numbers of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-(i+1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted list\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}


