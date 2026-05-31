#include <stdio.h>
#include <conio.h>
void main ()
{
    int i,n,f=1;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The Factorial of %d! : %d \n",n,f);
}