#include <iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int key,i;
    bool found=false;
    cout<<"Enter key to find:";
    cin>>key;
    for ( i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            cout<<"key is found at"<<i+1<<"position";
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"element is not found.";
    }
    return 0;
}