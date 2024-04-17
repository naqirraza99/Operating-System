#include<iostream>
using namespace std;

int main()
{
	/*int employ_Id;
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
	cout<<" Total salary amount of employee is:"<<total_salary<<endl;
	cout<< " Employ Id:"<<employ_Id<<endl;
	cout<<" Total Salary:"<<total_salary<<endl; 
	return 0;
}*/
int n;
char refreshment,coupon,circle;
double total_cost;

cout<< " Enter number of tickets"<<endl;
cin>> n;
cout<< " Do you have refreshment?"<<endl;
cin>> refreshment;
cout<< " Do you have coupon code?"<<endl;
cin>> coupon;
cout<< " Enter the circle"<<endl;
cin>> circle;


if((circle ='k') and (n>20))
total_cost=(75)*(10/100);
cout<<total_cost<<endl;

else if( circle='q' and n>20)
total_cost=(75)*(10/100);
 cout<<total_cost<<endl;
 
else if(circle='k' and coupon='y')
total_cost=(75)*(2/100);
cout<<total_cost<<endl;

else if(circle='k' and coupon='y')
total_cost=(150)*(2/100);
cout<<total_cost<<endl;

else if(circle='k' and coupon='n')
total_cost=75;
cout<<total_cost<<endl; )

else if(circle='q' and coupon='n')
total_cost=150;
cout<<total_cost<<endl; )

else if(circle='k' and refreshment='y')
total_cost=(75+50)
cout<<total_cost<<endl;

else if(circle='q' and refreshment='y')
total_cost=(150+50)
cout<<total_cost<<endl;
  
return 0;
}

