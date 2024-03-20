#include<stdio.h>
int main()
{
int num1,num2, div;
printf("enter the numbers");
scanf("%d%d",&num1,&num2);
//div=num1/num2;
if(num2==0)
printf("divide by zero error\n");
else{
div=num1/num2;
printf("divide result=%d\n",div);
}
return 0;
}
