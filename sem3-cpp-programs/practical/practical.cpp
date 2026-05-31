#include<iostream>
#include<iomanip> 
using namespace std; 
int main()
{
    int N, i, j, isPrime;
    cout << "Enter the value of N to find prime numbers upto : "; 
    cin >> N;
    for(i = 2; i <= N; i++)
    {
        isPrime = 0;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }
        if(isPrime==0 && N!= 1)
        cout << i << " ";
    }
    return 0;
}
 