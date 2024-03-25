//Calculate sum of digits of integer 234=2+3+4=9;
#include<stdio.h>
int main()
{
int num,rem,temp=0;
printf("enter the number\n");
scanf("%d",&num);

while(num!=0)
{
rem=num%10;
num=num/10;
temp+= rem;
} 
printf(" temp=%d \n",temp);

return 0;
}
