#include<iostream>
using namespace std;
class MyClass
{
    public:
    MyClass()
    {
        cout<<"Constructor is called!"<<endl;
    }
    ~MyClass()
    {
        cout<<"Destructor is called";
    }
};

int main()
{
    MyClass obj;
    return 0;

}