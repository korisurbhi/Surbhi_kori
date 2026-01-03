#include<iostream>
using namespace std;
class data
{
    public:
    int val;
    void show()
    {
        cout<<"value:"<<val;
    }
};
int main()
{
    data obj;
    cout<<"enter a value:";
    cin>>obj.val;
    obj.show();
    return 0;
}