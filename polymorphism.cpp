#include<iostream>
using namespace std;

class Base
{
public:
virtual void show()

{
	cout << "Base class\n";
}
 virtual int display()
{
	
	cout<<" display1"<<endl;
}
};
class Derived:public Base
{
public:
void show()
{
cout << "Derived Class";
}
int display()
{
	
	cout<<" display"<<endl;
}
};
int main()
{
	
Base *b = nullptr;
 //Base class pointer
//Derived d; //Derived class object
b = nullptr;
b->show(); //Late Binding Ocuurs
b->display();
}
