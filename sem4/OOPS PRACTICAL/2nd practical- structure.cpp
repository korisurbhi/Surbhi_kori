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
	Employee emp;
	
	cout<<"Enter Employee ID:";
	cin>>emp.empID;
	
	cout<<"Enter Employee Name:";
	cin>>emp.name;
	
	cout<<"Enter Basic Salary:";
	cin>>emp.basic;
	
	emp.hra= 0.25*emp.basic;
	emp.da=0.30*emp.basic;
	emp.gross=emp.hra+emp.da+emp.basic;
	
	cout<<"-----Employee Details-----"<<endl;
	cout<<"Employee ID:"<<emp.empID<<endl;
	cout<<"Employee Name:"<<emp.name<<endl;
	cout<<"HRA:"<<emp.hra<<endl;
	cout<<"DA:"<<emp.da<<endl;
	cout<<"Gross salary:"<<emp.gross<<endl;
	return 0;
}
