#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is Leap year",year);
    }
    else
    {
        printf("%d is not Leap year",year);
    }
}