#include<iostream>
#include<string>
using namespace std;
struct Employee
{
	int empID;
	string name;
	float basic,hra,da,gross;
};

int main()
{
	int i,n;
	cout<<"Enter Employee Numbers:";
	cin>>n;
	Employee emp[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter Employee ID:";
		cin>>emp[i].empID;
		
		cout<<"Enter Employee Name:";
		cin>>emp[i].name;
	
		cout<<"Enter Basic Salary:";
		cin>>emp[i].basic;
	
		emp[i].hra= 0.25*emp[i].basic;
		emp[i].da=0.30*emp[i].basic;
		emp[i].gross=emp[i].hra+emp[i].da+emp[i].basic;
	}

	cout<<"-----Employee Details-----"<<endl;
	
	for(i=0;i<n;i++)
	{
		
		cout<<"Employee ID:"<<emp[i].empID<<endl;
		cout<<"Employee Name:"<<emp[i].name<<endl;
		cout<<"HRA:"<<emp[i].hra<<endl;
		cout<<"DA:"<<emp[i].da<<endl;
		cout<<"Gross salary:"<<emp[i].gross<<endl;
	}
	
	return 0;
}
