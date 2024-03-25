#include<stdio.h>
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);

	if(year%400==0)
	{
		printf("year is leap\n");
		printf("days of year are 366\n");
	}
	else if(year%100==0)
	{
		printf("year is not leap\n");
		printf("deays of year are 365\n"); 
	}
	else if(year%4==0)
	{
		if(year%4==0)
			printf("year is leap year\n");
		printf("days of year are 366\n");
	}
	else
	{
        printf("year is leap year\n");
		printf("days of year are 365\n");
	}


return 0;
}
