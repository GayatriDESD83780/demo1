//find days of year using logical operator  
/*#include<stdio.h>
int main()
{
int year;
printf("enter the year\n");
scanf("%d",&year);
if(year%4==0 &&year%100!=0)||(year%400))
printf("year is leap year\n days of year are 366\n");
else
printf("year is not leap year\n days of year are 365\n");
return 0;
}  */

//using conditional operator 



#include<stdio.h>
int main()
{
int year;
printf("enter the year\n");
scanf("%d",&year);

y=(year%4==0&&year%100!=0)?year%400==0:printf("year is leap\n");printf("not leap year\n");:printf("not leap year\n"); 
 
return 0;
}
