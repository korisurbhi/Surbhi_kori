#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3],i,j;
    cout<<"enter numbers for 3*3 matrix : ";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
        cout<<"\n";
    }
    cout<<"matrix is\n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
    cout<<"Transpose matrix is\n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<matrix[j][i];
        }
        cout<<"\n";
    }
    return 0;
}