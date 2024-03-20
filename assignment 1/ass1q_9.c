 #include<stdio.h>
   int main()
   {
   float f,c;
   printf("enter the fahrenheit value");
   scanf("%f",&f);
   printf("value of f %f\n",f-32);
   
   //c=0.55*(f-32);
  
  c=(5.0/9)*(f-32);
  printf(" value%f = %f\n",c,f);
 return 0;
  }

