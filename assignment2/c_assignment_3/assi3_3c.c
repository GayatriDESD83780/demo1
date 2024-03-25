#include<stdio.h>
int main()
{
int temp,rem,num,rev=0;
printf("enter the number to find palindrome\n");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("%d",rev);

if(temp==rev)
printf("given number is palindrome\n");
else
printf("given number is not palindrome\n");

return 0;
}
