#include<iostream>
class Rectangle
{
    public: int length,breadth,area;
    public: void getdata()
    {
        std::cout<<"To find Area of Rectangle:\n"; 
        std::cout<<"Enter length :";
        std::cin>>length;
        std::cout<<"Enter breadth:";
        std::cin>>breadth;
    }
    public: void Area()
    {
        area=length*breadth;
    }
    public: void show()
    {
        std::cout<<"Area of Rectangle is "<< area;
    }
};
class circle
{
    public: float radius,Area;
    public:
    void getdata()
    {
        std::cout<<"\n\nTo Find Area of Circle";
        std::cout<<"\nEnter a radius:";
        std::cin>>radius;
    }
    void area()
    {
        Area=radius*3.14*3.14;
    }
    void show()
    {
        std::cout<<"Area of circle is "<<Area;
    }
};
int main()
{
    Rectangle R1;
    R1.getdata();
    R1.Area();
    R1.show();

    circle c1;
    c1.getdata();
    c1.area();
    c1.show();
    return 0;
}