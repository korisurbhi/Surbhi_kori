#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter any Character : ");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
    {
        printf("This is an Alphabet.");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("This is a Digit.");
    }
    else
    {
        printf("This is a Special Character.");
    }
}