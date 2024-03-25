// num*ch=num time *****    
#include<stdio.h>
int main()
{
int num;
char ch;
printf("enter the number \n");
scanf("%d",&num);
printf("enter the character \n");
scanf("%*c%c",&ch);

for(int i=0; i<num; i++)
printf("%c",ch);

return 0;
}
