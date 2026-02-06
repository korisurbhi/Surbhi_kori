#include <iostream>

struct book
{
    int pages;
    float price;
    char name[20];
    char author[20];
};

int main()
{
    book b[5];

    std::cout<<"Enter information of 5 books";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nBook " << i + 1 << ":\n";
        
        std::cout << "Enter pages:";
        std::cin >> b[i].pages;

        std::cout << "Enter price:";
        std::cin >> b[i].price;

        std::cin.ignore();

        std::cout << "Enter name of book:";
        std::cin.getline(b[i].name, 20);

        std::cout << "Enter name of Author:";
        std::cin.getline(b[i].author, 20);
    }
    std::cout << "\nInformation of books is as follows:\n";

    for (int i = 0; i < 5; i++) 
    {
        std::cout << "\nBook " << i + 1 << ":\n";
        std::cout << "Pages: " << b[i].pages << "\n";
        std::cout << "Price: $" << b[i].price << "\n";
        std::cout << "Name: " << b[i].name << "\n";
        std::cout << "Author: " << b[i].author << "\n";
    }

 return 0;
}
