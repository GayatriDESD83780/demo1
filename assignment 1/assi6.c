#include<stdio.h>

int main()
{
    int a[5][5],b[5][5],mul[5][5],r,c,i,j,k;
    printf("enter the num of rows=");
    scanf("%d",&r);
     printf("enter the num of column=");
     scanf("%d",&c);
     printf("enter the 1st matrix element=\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     printf("enter the 2nd matrix element=\n");

     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
     }
     printf("multiply of matrix=\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]=a[i][k]*b[k][j];
            }
        }
     }
     //for output
for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
         printf("%d\t,mul[i][j]");
        }
        printf("\n");
     }
    return 0;
}
