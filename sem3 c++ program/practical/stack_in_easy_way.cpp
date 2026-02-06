#include<iostream> 
using namespace std; 
#include<stdlib.h> 
#define max 50 
template <class T> 
class stack 
{ 
    private: 
        T top,stk[50],item; 
    public:
        stack(); 
        void push(); 
        void pop(); 
        void display(); 
    }; 
template <class T> 
stack<T>::stack() 
{ 
top=-1; 
} 
//code to push an item into stack; 
template <class T> 
void stack<T>::push() 
{ 
    int n;
    if(top==max-1) 
        cout<<"Stack Overflow...\n"; 
    else 
        { 
            cout<<"Enter no of element:";
            cin>>n;
            for(int i=0;i<n;i++)
            {
            cout<<"Enter an item to be pushed:"; 
            top++; 
            cin>>item; 
            stk[top]=item; 
            }
            cout<<"Pushed Sucesfully ... \n"; 
        }
} 
template <class T> 
void stack<T>::pop() 
{ 
    if(top==-1) 
        cout<<"Stack is Underflow"; 
    else  
        { 
            item=stk[top]; 
            top--; 
            cout<<item<<" is poped Sucesfully ... \n"; 
        }
}   
template <class T> 
void stack<T>::display() 
{ 
    if(top==-1) 
        cout<<"Stack Under Flow"; 
    else 
        { 
            for(int i=top;i>-1;i--) 
            {   
                cout<<"|"<<stk[i]<<"|\n"; 
                cout<<" --- \n"; 
            } 
        } 
} 
int main() 
{ 
    int choice; 
    stack<int>st; 
    while(1) 
    { 
    cout<<"\n\n*****Menu for Skack operations*****\n\n"; 
    cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n"; 
    cout<<"Enter Choice:"; 
    cin>>choice; 
    switch(choice) 
    { 
        case 1: 
        st.push(); 
        break; 
        case 2: 
        st.pop(); 
        break; 
        case 3: cout<<"Elements in the Stack are ... \n"; 
        st.display(); 
        break; 
        case 4: 
        exit(0); 
        default:cout<<"Invalid choice...Try again...\n"; 
    } 
    } 
} 