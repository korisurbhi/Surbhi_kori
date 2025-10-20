#include <iostream> 
using namespace std; 
int lin_search(int a[],int n,int x)
{ 
    int i; 
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        return(i);
    } 
return(-1); 
} 
int main()
{ 

    int i,a[10],x,j,n; 
    cout<<"enter the no of elements in the array:"; 
    cin>>n; 
    cout<<"enter numbers:\n"; 
    for(i=0;i<n;i++)
    {
        cout<<"Number "<<i+1<<":"; 
        cin>>a[i];
    } 
    cout<<"enter the number to be searched:"; 
    cin>>x; 
    j=lin_search(a,n,x); 
    if(j==-1) 
    cout<<"not found"; 
    else cout<<"found"; 
}