#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return(a+b);
}
void main()
{
    int a,b,c;
    printf("Enter Two numbers :");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("Addition of %d and %d is %d",a,b,c);
}