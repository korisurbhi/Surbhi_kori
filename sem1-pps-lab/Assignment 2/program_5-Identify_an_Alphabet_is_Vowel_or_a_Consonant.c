#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("%c is Vowel.",ch);
    }   
    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is Consonants.",ch);
    }
    else 
    {
        printf("%c is not an Alphabet.",ch);
    }
}