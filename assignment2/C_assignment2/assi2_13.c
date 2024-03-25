#include<stdio.h>
int main()
{
int x,y;
printf("enter the co-ordinates\n");
scanf("%d%d",&x,&y);
if(x==0&&y==0)
printf("co ordinates lies on origin \n");
if(x==0&&y!=0)
printf("co ordinates lies on +-y axis\n");

if(x!=0&&y==0)
printf("co ordinates lies on +-x axis\n");

if(x>0&&y>0)
printf("co ordinates lies in 1st quadrant\n");

if(x<0&&y>0)
printf("co ordinates lies in 2nd quadrant\n");

if(x<0&&y<0)
printf("co ordinates lies in 3rd quadrant\n");

if(x>0&&y<0)
printf("co ordinates lies in 4 rth  quadrant\n");


return 0;

}
