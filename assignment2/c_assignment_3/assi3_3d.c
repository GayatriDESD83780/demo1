#include<stdio.h>
int main()
{
int res,rem,num,temp=0;
printf("enter the number to find armstrong or not\n");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
num=num/10;

res=rem*rem*rem;
temp=temp+res;
}
printf("%d",temp);

return 0;
}
