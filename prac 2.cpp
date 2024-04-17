#include<iostream>
using namespace std;

int main()
{
	int employ_Id;
	int working_hrs;
	int salary_amount;
	
	cout<<" enter employ id"<<endl;
	cin>> employ_Id;
	
	cout<< " Enter working hours"<<endl;
	cin>> working_hrs;
	
	cout<<" enter salary amount"<<endl;
	cin>> salary_amount;
	int total_salary;
	total_salary= working_hrs*salary_amount;
	cout<< total_salary;
	return 0;
}
