#include<iostream>
class circle
{
    public: float radius,Area;
    public:
    void getdata()
    {
        std::cout<<"Enter a radius:";
        std::cin>>radius;
    }
    void area()
    {
        Area=radius*3.14*3.14;
    }
    void show()
    {
        std::cout<<"Area ="<<Area;
    }
};
int main()
{
    circle c1;
    c1.getdata();
    c1.area();
    c1.show();
    return 0;
}