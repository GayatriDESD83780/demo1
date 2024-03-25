/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("num1(a)is greater\n ");
		}
		else
		{
			printf("num3(c)is greater\n");
		}
	}
	else 
		if(b>c)
		{
			printf("num2 (b)is greater\n");
		}
		else
		{
			printf("num3 (c) is greater\n");
		}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=(a>b)?( (a>c)  ?  a : c)  :((b>c) ?b:c);
	printf("maximum of 3 is %d\n",max);
	 


return 0;
}




