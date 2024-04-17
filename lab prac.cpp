#include<iostream>
using namespace std;

class Vehicle{
	
	public:
		Vehicle()
		{
			cout<<" This is a vehicle"<<endl;
			
		}
	
};
class Fourwheeler: public Vehicle{
	public:
	Fourwheeler()
	{
		cout<<" this is a four wheeler car"<<endl;
		
	}
	
};
class Car: public Vehicle{		//public Fourwheeler{
	public:
	Car()
	{
		cout<<" this is a car"<<endl;
		
	}
	
};
class wheeler1: public Fourwheeler{
public:
	wheeler1()
	{
		cout<<" this is a wheeler1 car"<<endl;
	}

};
class wheeler2: public Fourwheeler{
public:
	wheeler2()
	{
		cout<<" this is a wheeler2 car"<<endl;
	}

};
class Car1: public Car{
public:
	Car1()
	{
		cout<<" this is a car 1"<<endl;
	}

};
class Car2: public Car{
public:
	Car2()
	{
		cout<<" this is a car 2"<<endl;
	}

};
int main()
{
//Car obj1;
//Vehicle obj2;
//Fourwheeler obj3;
//wheeler1 w1;
//wheeler2 w2;
//Car1 c1;
Car2 c2;	
}
