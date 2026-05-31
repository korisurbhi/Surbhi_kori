#include<iostream>
using namespace std; 
int bin_search(int a[],int x,int lb,int ub) 
{  
    int mid; 
    mid=(lb+ub)/2;  
    if(lb>ub) 
        return -1; 
    if(a[mid]==x) 
        return mid; 
    else if(a[mid]<x) 
        return bin_search(a,x,mid+1,ub); 
    else 
        return bin_search(a,x,lb,mid-1); 
} 
int main()
{ 
    int i,j,n,x,a[10],lb,ub; 
    cout<<"enter the no. of elements in the array: ";
    cin>>n; 
    lb=0; ub=n-1; 
    cout<<"enter the elements\n"; 
    for(i=0;i<n;i++)
    { 
        cout<<"Element "<<i+1<<":"; 
        cin>>a[i]; 
    }
    cout<<"enter the element to be searched:";
    cin>>x; 
    j=bin_search(a,x,lb,ub); 
    if(j==-1)
        cout<<"not found";
    else 
        cout<<"found "<<a[j]; 
}