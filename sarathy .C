
#include<stdio.h>
void main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
if(num>0)
printf("%d is positive number \n",num);
else if(num<0)
printf("%d is negative number \n",num);
else
printf("zero");
}
