#include<stdio.h>
int main()
{
int num,i,temp,res;
printf("enter the number to find factors  : ");
scanf("%d",&num);
temp=(int)num/(int)2;
i=temp;
while(i!=0)
{
if(num%i==0)
{
printf("factor %d\n",i);
}
i--;
}
return 0;
}
