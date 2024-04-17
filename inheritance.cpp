#include<iostream>
using namespace std;

class Person{
	protected:
		int id;
		char name[50], address[100];
		
		public:
		Person()
		{
			id=0;
			name[0]='\0';
			address[0]='\0';		
			}	
	void Getinfo()
	{
		cout<<" Enter your ID"<<endl;
		cin>>id;
		
		cout<<" Enter your Address"<<endl;
		cin>>address;
	}
	void showinfo()
	{
		cout<<" Your personal Information is as follows:"<<endl;
		cout<<"ID:"<<id<<endl;
		cout<<"Address:"<<address<<endl;
		
	}
};
class student: public Person{
	private:
		int rno,marks;
		public:
			student()
			{
				Person::Person();
				rno=marks=0;
			}
void getedu()
{
	cout<<" enter your roll number:"<<Endl;
	cin>>rno;
	cout<<" enter your marks:"<<endl;
	cin>>marks;
	
}
void showedu()
{
	
	cout<<" *** Your educational Information is as follow:"<<endl;
	cout<<"roll number:"<<rno<<endl;
	cout<<"marks:"<<marks<<endl;
	
}
};
int main()
{
	student s;
	s.Getinfo();
	s.getedu();
	s.showinfo();
	s.showedu();
}
