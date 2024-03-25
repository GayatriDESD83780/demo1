#include<stdio.h>
int main()
{
int num,i=1,fact=1;
printf("enter the number to find its factorial\n");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;
i++;
}
printf("factorial of number is %d\n",fact);

return 0;
}
