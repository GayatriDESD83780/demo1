#include<stdio.h>
int fibonacci(int num);

int main()
{int i, no;
printf("fibonacci series of term");
scanf("%d",&no);
for(i=0;i<=no;i++)
{
 printf("%d",fibonacci(i));
 printf(" ");
}

    return 0;
}
int fibonacci(int num)
{
    if(num==0||num==1)
    return num;
    else
    return fibonacci(num-1)+fibonacci(num-2);
}
