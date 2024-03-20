//print ascii value of user enter char in hex,deci,octal
#include<stdio.h>
int main()
{
char a;
int b;
printf(" enter the char");
scanf("%c",&a);
printf("a=%d\n ",a);
printf("a=%o\n",a);
printf("a=%x\n",a);

//*************************
printf("enter the ascii value");
scanf("%d",&b);
printf("character value of ascii:%c\n",b);
return 0;

}
