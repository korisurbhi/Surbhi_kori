#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d;
    printf("Press\n");
    printf(" 1 for Addition :\n");
    printf(" 2 for Subtraction :\n");
    printf(" 3 for Multiplication :\n");
    printf(" 4 for Division :\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    {
        printf("Enter Two No.s :");
        scanf("%d %d",&b,&c);
        d=b+c;
        printf(" Addition of given no. is %d",d);
        break;
    }
    case 2:
    {
        printf("Enter Two No.s :");
        scanf("%d %d",&b,&c);
        d=b-c;
        printf("Subtraction of given no. is %d",d);
        break;
    }
    case 3:
    {
        printf("Enter Two No.s :");
        scanf("%d %d",&b,&c);
        d=b*c;
        printf("Multiplication of given no. is %d",d);
        break;
    }
    case 4:
    {
        printf("Enter Two No.s :");
        scanf("%d %d",&b,&c);
        d=b/c;
        printf("Division of given no. is %d",d);
        break;
    }
    default:
    {
        printf("Wrong Input");
        break;
    }
    }
}