/*#include<iostream>
using namespace std;
  
struct student{
	int rno,marks;
	string name;
	
}; 
int main()
{
	student s;
	cout<<" enter your roll number:"<<endl;
	cin>>s.rno;
	cout<<" enter your name:"<<endl;
	cin>>s.name;
	cout<<" enter your marks"<<endl;
	cin>>s.marks;
	
	 //s.rno<<s.name<<s.marks<<endl;
}
#include<iostream>
using namespace std;

struct info{
	int day,month,year;
};
int main()
{
	info i;
	cout<<" ENTER YOUR INFORMATION:"<<endl;
	
	cout<<" enter your day:"<<endl;
	cin>>i.day;
	cout<<" enter your month:"<<endl;
	cin>>i.month;
	cout<<" enter your year:"<<endl;
	cin>>i.year;
	
	cout<<" your date of birth is:"<<i.day<<"/"<<i.month<<"/"<<i.year<<endl;
}
#include<iostream>
using namespace std;

union book{
	//public:
	int id,price,pages;
	
};
int main()
{
	book b1,b2;
	cout<<" enter book id:"<<endl;
	cin>>b1.id>>b2.id;
	cout<<" enter book price:"<<endl;
	cin>>b1.price>>b2.price;
	cout<<" enter book pages:"<<endl;
	cin>>b1.pages>>b2.pages;
	
	cout<<" the expensive book is:"<<endl;
	if(b1.price>b2.price)
	{
		cout<<b1.id<<endl<<b1.price<<endl<<b1.pages<<endl;
	}
	else
	{
		
		cout<<b2.id<<endl<<b2.price<<endl<<b2.pages<<endl;
	}
}
#include<iostream>
using namespace std;
int main()
{
enum year{jan,feb,march,april,may,june,july,aug,sept,oct,nov,dec};
year y;
y=march;
cout<<" the value of y is"<<y<<endl;
}
#include<iostream>
using namespace std;

class hello
{
	
	public:
		hello()
		{
		cout<<" constructor called!"<<endl;	
		}
};
int main()
{
	hello x,y,z;
#include<iostream>
using namespace std;

class integer
{
	int x,y;
	public:
		integer()
		{
		}
			void avg()
			{
				cout<<" Enter two numbers:"<<endl;
				cin>>x>>y;
				int s=x+y/2;
				cout<<"the avg is:"<<s<<endl;
			}
			
		
};
int main()
{
	integer i;
	i.avg();
	
}
#include<iostream>
using namespace std;

class student
{
	int marks;
	char grade;
	public:
		student(int m, char g)
		{
			marks=m;
			grade=g;
		}
	void show()
	{
	
		cout<<" record of student 1"<<endl;
		cout<<"marks"<<endl;
		cin>>marks;
		cout<<"grade"<<endl;
		cin>>grade;
		cout<<" record of student 2"<<endl;
		cout<<"marks"<<endl;
		cin>>marks;
		cout<<"grade"<<endl;
		cin>>grade;
	}
	};
	int main()
	{
		student s1(730,'a');
		student s2(550,'b');
		
		s1.show();
		s2.show();
	}*/
#include <iostream>
using namespace std;

int main () {
double* pvalue = NULL; // Pointer initialized with null


pvalue = new double; // Request memory for the variable
*pvalue = 29494.99; // Store value at allocated address
cout << "Value of pvalue : " << *pvalue << endl;
//delete pvalue; // free up the memory.
return 0;
}

