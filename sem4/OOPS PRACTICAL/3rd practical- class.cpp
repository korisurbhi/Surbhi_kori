#include<iostream>
using namespace std;
class student
{
	char  name[30];
	int age;
	public:
	void getdata();
	void display();
	
};

void student::getdata()
{
	cout<<"Enter name:";
	cin>>name;
	
	cout<<"Enter Age:";
	cin>>age;
	
}

void student::display()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Asge:"<<age;
	
}
int main()
{
	student p;
	p.getdata();
	p.display();
	return 0;
}
