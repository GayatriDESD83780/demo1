#include<stdio.h>
int main()
{
int empid,department_no;
char dc_code;
printf("enter the employ id\n");
scanf("%d",&empid);

printf("enter the department num.\n");
scanf("%d",&department_no);

printf("enter the designation code\n");
scanf("%*c%c",&dc_code);

switch(department_no)
   {
   case 10 :printf(" employ with employ id: %d is working in marketing department ",empid);
             break;
   case 20 :printf("employ with employ id :%d working in management department ", empid);
             break;
   case 30 :printf("employ with employ id :%d working in sales department",empid);
            break;
   case 40 : printf("emply with employ id:%d working in designing department",empid);
            break;
   }

  switch(dc_code)
  {
  case'M'  :printf("as manager\n");
            break;
  case'S'  :printf("as supervisor\n");
           break;
  case's'  :printf("as security officer\n");
           break;
  case'C'  :printf("as clerk\n");
            break;

 }
 

return 0;
}
