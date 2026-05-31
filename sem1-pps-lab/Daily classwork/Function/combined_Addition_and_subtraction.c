#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return(a+b);
}
int sub(int a, int b)
{
    return(a-b);
}
void main()
{
    int a,b,c,d;
    printf("Press\n");
    printf(" 1 for Addition :\n");
    printf(" 2 for Subtraction :\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    {
        printf("Enter No.s :");
        scanf("%d",&b);
        printf("Enter No.s :");
        scanf("%d",&c);
        d=b+c;
        printf(" Addition of given no. is %d",d);
        break;
    }
    case 2:
    {
        printf("Enter No.s :");
        scanf("%d",&b);
        printf("Enter No.s :");
        scanf("%d",&c);
        d=b-c;
        printf("Subtraction of given no. is %d",d);
        break;
    }
    default:
    {
        printf("ERROR!!!");
    }
    }
}