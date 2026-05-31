#include<iostream> 
using namespace std; 
void swap_value(int ,int); 
void swap_reference(int&,int&); int 
main() 
{ 
int a,b; 
cout << "Enter a and b values : "; cin >> 
a >> b; 
cout<< "Swap two numbers by call by value "<<endl; 
swap_value(a,b); 
cout<< "Swap two numbers by call by reference"<<endl; swap_reference(a,b); 
return 0; 
} 
 
 
 
void swap_value(int a, int b) 
{ 
int temp; 
temp=a; 
a=b; 
b=temp; 
cout <<"After swapping by call by value : "<<endl; cout << 
"a = "<<a<<endl; 
cout << "b = "<<b<<endl; 
} 
void swap_reference(int &a, int &b) 
{ 
int temp; 
temp=a; 
a=b; 
b=temp; 
cout <<"After swapping by call by value : "<<endl; cout << 
"a = "<<a<<endl; 
cout << "b = "<<b<<endl; 
}