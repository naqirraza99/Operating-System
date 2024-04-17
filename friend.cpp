/*#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	public:
		A()
		{
			a=10;
		}
		friend void show(A,B);
};
class B{
	int b;
	public:
	 B()
	{
		b=20;
	}
friend void show(A,B);
};
void show (A x,B y)
{
	int r;
	r=x.a+y.b;
cout<<"value of class a"<<x.a<<endl;
cout<<"value of class b"<<y.b<<endl;

};
int main()
{
A obj1;
B obj2;
show(obj1,obj2);	
}
#include<iostream>
using namespace std;

class B;
class A{
	int a;
	public:
		A()
		{
			a=10;
		}
		friend void show(A,B);
};
class B
{
	int b;
	public:
		B()
		{
			b=20;
		}
		friend void show(A,B);
		
};
void show(A x, B y)
{
	int r;
	r=x.a+y.b;
	cout<<" The value of a is"<<x.a<<endl;
	cout<<"value of b is:"<<y.b<<endl;
	cout<<"sum is:"<<r<<endl;
}
int main()
{
	A obj1;
	B obj2;
	show(obj1,obj2);
	
}
#include<iostream>
using namespace std;
 class A{
 	int a,b;
 	public:
 		A()
 		{
 			a=20;
 			b=30;
		 }
 
 friend class B;
};
class B{
	public:
		void showA(A obj){
			cout<<"the value of a"<<obj.a<<endl;
			
		}
		void show(A obj){
			cout<<" the value of b is:"<<obj.b<<endl;
		}
};
int main()
{
	A x;
	B y;
	y.showA(x);
	y.show(x);
}*/
#include <iostream>
using namespace std;

class A{
static int n;
	public:
		static void fun(){
			cout<<n<<endl;
		}
};
//int A::n=10;
int main()
{
	A ::fun();
}


