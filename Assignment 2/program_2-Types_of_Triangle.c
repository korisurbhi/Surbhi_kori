#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st Side length of Triangle : ");
    scanf("%d",&a);
    printf("Enter 2nd Side length of Triangle : ");
    scanf("%d",&b);
    printf("Enter 3rd Side length of Triangle : ");
    scanf("%d",&c);
    if(a==b && a==c)
    {
        printf("Triangle is Equilateral.");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Triangle is isosceles.");
    }
    else
    {
        printf("Triangle is scalene.");
    }
}