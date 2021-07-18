#include <stdio.h>
int main()
{
    int a, b, sum,i,j;
    a=12;
    b=34;
    sum= a+b;
    printf("The sum is %d",sum);

    for(i=5;i<=10;i++)
    {
        for (j=1;j<=10;j++)
        {
            printf("%d * %d = %d ",i,j,i*j);
            printf("\n");
        }
    }
}