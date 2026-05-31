#include<iostream>
int main()
{
    int a[5]{1,45,23,12,14};
    int max=0,i;
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    std::cout<<"higher is "<<max;
    return 0;
}