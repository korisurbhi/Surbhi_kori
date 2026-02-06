#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    float a;
    printf("Input 10 numbers :\n");
    for(i=1;i<=10;i++)
    {
        printf("Number - %d :",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    a=sum/10.0;
    printf("The Sum of 10 numbers is %d\n",sum);
    printf("The Average is %f",a);
}