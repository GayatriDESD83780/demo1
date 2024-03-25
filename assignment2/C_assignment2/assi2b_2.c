#include<stdio.h>
int main()
{

float num1, num2,res;
char opr;
here:
    printf("enter the numbers\n");
    scanf("%f",&num1);

    printf("enter the operand\n");
    scanf("%*c%c",&opr);

    printf("enter the numbers\n");
    scanf("%f",&num2);

switch(opr)
 
{
 case '+':res=num1+num2;
    	 printf(" res: %f \n",res);
         break;
case '-' :res=num1-num2;
         printf("res:%f \n",res);
		 break;

case '*' :res=num1*num2;
           printf("res:%f \n",res);
           break;
		   
case '/' :res=num1/num2;
          
		  if(num2!=0)
		  printf("res:%f \n",res);
		  else
		  printf("zero value error\n");
           break;



}

char choice;
printf("do you want to continue  y/n");
scanf("%*c%c",&choice);

if (choice=='y'||choice=='Y')
   goto here;


return 0;

}
