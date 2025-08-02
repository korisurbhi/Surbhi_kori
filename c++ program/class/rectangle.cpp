#include<iostream>
class Rectangle
{
    public: int length,breadth,area;
    public: void getdata()
    {
        std::cout<<"Enter length and breadth:";
        std::cin>>length>>breadth;
    }
    public: void Area()
    {
        area=length*breadth;
    }
    public: void show()
    {
        std::cout<<"Area ="<< area;
    }
};
int main()
{
Rectangle R1;
R1.getdata();
R1.Area();
R1.show();
}