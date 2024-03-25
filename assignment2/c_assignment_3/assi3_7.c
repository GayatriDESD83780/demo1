#include<stdio.h>
int main()
{
	int num,i,j,temp,k;
	printf("enter the number to find unique pair\n");
	scanf("%d",&num);
	temp=num/2;
	k=num;
	for(i=1;i<=temp; i++)
	{
		if(i>k){
			break;
		}
		for(j=num;j>0; j--) 
		{
			if(i*j==num)
			{
//			printf("i===%d\n",i);
//			printf("j===%d\n",j);
				if(i>j){
//					printf("III");
				break;
				}
				k=j;
				printf("%d*%d=%d\n",i,j,num);
			}
		}
	}



	return 0;
}
