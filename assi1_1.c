#include<stdio.h>
int main()
{
int a,b,sum,diff,mul;
printf("enter the numbers");
scanf("%d%d",&a,&b);
sum=a+b;
printf("result sum of%d and%d =%d\n",a,b,sum);

diff=sum-b;
printf("diff result of%dand %d=%d\n", sum,b,diff);
mul=diff*a;
printf("result mul of %d and %d=%d\n",diff,a,mul);
return 0;
}
