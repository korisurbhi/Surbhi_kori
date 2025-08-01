#include<iostream>
void add(int a, int b);
int main()
{
    int p,q;
    std::cout<<"Enter 2 numbers: ";
    std::cin>>p>>q;
    add(p,q);
    return 0;
}
void add(int a, int b)
{
    int r,s,t;
    r=a;
    s=b;
    t=r+s;
    std::cout<<"sum="<<t;
}