#include<stdio.h>
#include<conio.h>
void ct(int a,int b,int c)
{
    int check;
    check=a+b+c;
    if(check==180)
    {
        printf("Triangle can be Formed .");
    }
    else
    {
        printf("Triangle cannot formed .");
    }
}
void main()
{
    int a,b,c;
    printf("Enter the Angle of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    ct(a,b,c);
}