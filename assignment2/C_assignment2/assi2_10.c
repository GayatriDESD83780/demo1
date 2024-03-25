#include<stdio.h>
int main()
{
char a;
printf("enter the character\n");
scanf("%c",&a);
if(a>=65&&a<=90 ||a>=97 &&a<=122)
{
   printf(" they are alfabets\n");
   if(a>=65 && a<=90)
   printf("alfabets are uppercase\n");
   else
   printf("alfabets are lowercase\n");
}
else if(a>=48 && a<=57)
printf("character is digit \n");
else if (a==32)
printf("character is a special character space\n");
else if(a==10)
printf("character is a special character new line \n");
else if (a=='\r')
printf("character is a special character carrage return \n");
else if(a=='\t')
printf("character is a special character of tab \n");
else
printf("not listed above \n");
return 0;
}
