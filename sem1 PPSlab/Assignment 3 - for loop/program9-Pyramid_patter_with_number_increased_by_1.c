#include <stdio.h>
#include <conio.h>
void main ()
{
    int i,j,n,c,b=1;
    printf("Input Number of Rows : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (c= n+ 1;c>i;c--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d",b);
            b++;
        }
        printf("\n");
    }
}
