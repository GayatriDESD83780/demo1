#include<stdio.h>
int main()
{
int num1 ,num2,res;
printf("enter the numbers");
scanf("%d%d",&num1,&num2);
res=num1>num2?1:0;
if(res==1)
printf("num1 is greater");
else
printf("num2 is greater");
 		
return 0;
}
