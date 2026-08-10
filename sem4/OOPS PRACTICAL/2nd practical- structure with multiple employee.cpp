#include<iostream>
#include<string>
using namespace std;

struct employee
{
	int empID;
	string name;
	float basic, hra, da, gross;
};

int main()
{
	int n,i,h,d;
	
	cout<<"Enter Employee Numbers:";
	cin>>n;
	
	employee emp[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter Employee id:";
		cin>>emp[i].empID;
		
		cout<<"Enter Employee Name:";
		cin>>emp[i].name;
		
		cout<<"Enter Basic Salary:";
		cin>>emp[i].basic;
		
		cout<<"Enter hra:";
		cin>>h;
		
		cout<<"Enter da:";
		cin>>d;
		
		emp[i].hra=(h/100)*emp[i].basic;
		emp[i].da=(d/100)*emp[i].basic;
		emp[i].gross=emp[i].da+emp[i].hra+emp[i].basic;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"Employee id:"<<emp[i].empID<<endl;
		cout<<"Employee Name:"<<emp[i].name<<endl;
		cout<<"Basic Salary:"<<emp[i].basic<<endl;
		cout<<"HRA:"<<emp[i].hra<<endl;
		cout<<"DA:"<<emp[i].da<<endl;
		cout<<"Gross Salary:"<<emp[i].gross<<endl;
	}
	
	return 0;
}
