#include<stdio.h>
int fsum()
{
int a,b,sum=0;
printf("Enter the values of a and b");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);
}
void main()
{
int s=0;
printf("sum of numbers using function");
s=fsum();
printf("sum is %d",s);
}
