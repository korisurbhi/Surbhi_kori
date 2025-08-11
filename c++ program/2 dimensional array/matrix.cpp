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
<<<<<<< HEAD
    cout<<"matrix is\n";
=======
    cout<<"matrix\n";
>>>>>>> 2f63b283330b377146bf083f298f378f7f32be62
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<matrix[i][j];
<<<<<<< HEAD
        }
        cout<<"\n";
    }
    cout<<"Transpose matrix is\n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<matrix[j][i];
=======
            cout<<"   ";
>>>>>>> 2f63b283330b377146bf083f298f378f7f32be62
        }
        cout<<"\n";
    }
    return 0;
}
