/*#include<iostream>
using namespace std;

class A{
	public:
		virtual void show()
		{
			cout<<" Parent class A:"<<endl;
			
		}
		
};
class B:public A{
	void show()
	{
		cout<<" child class b:"<<endl;
	}
	
};
class C:public A{
	public:
		void show()
		{
			cout<<" child class C:"<<endl;
		}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	B *ptr;
	//ptr= &obj1;
	//ptr->show();
	ptr= &obj2;
	ptr->show();
	ptr= &obj3;
	ptr->show();

	return 0;
}
#include<iostream>
using namespace std;

class Parent{
	public:
		virtual void show()=0;
		
	};
class Child1:public Parent{
	public:
		void show()
		{
			cout<<" child class 1"<<endl;
		}
};	
class Child2:public Parent{
	public:
		void show()
		{
			cout<<" child class2"<<endl;
		}
};
int main()
{
	Parent *ptr[2];
	ptr[0]= new Child1;
	ptr[1]= new Child2;
	ptr[0]->show();
	ptr[1]->show();
	return 0;
	
}
#include<iostream>
using namespace std;

class Parent{
	public:
	virtual void function()=0;
};
class Child:public Parent
{
	public:
		void function()
		{
			cout<<" pure virtual function"<<endl;
		}
};
int main()
{
	Child a;
	Child* ptr;
	ptr= &a;
	ptr->function();
}*/
#include<iostream>
using namespace std;

class Parent{
	protected:
	 int n;
	};
class Child1:virtual public Parent{
	public:
	void set(){
	
	cout<<"child1"<<endl;
}
};	
class Child2: virtual public Parent{
	public:
		
		void set()
		{
		cout<<" child2"<<endl;
	}
};
class baby:public Child1, public Child2
{
	public:
		void set()
		{
			n=10;
			cout<<"n"<<n<<endl;
		}
};
int main()
{
	baby obj;
	obj.set();
	Child1 obj1;
	Child1 *ptr;
	ptr= &obj1;0
	ptr->set();
}
