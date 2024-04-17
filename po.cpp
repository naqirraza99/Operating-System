/*#include<iostream>
using namespace std;
int main()
{

int n;
int *ptr;

cout<<" enter vale of n:"<<endl;
cin>>n;

ptr=&n;

cout<<" value of n is"<<n<<endl;
cout<<" address of n is"<<&n<<endl;
cout<<" address of n is"<<ptr<<endl;
cout<<" address of n is"<<*ptr<<endl;
return 0;
}--------*/

#include<iostream>
using namespace std;
int main()
{
	/*int n;
	float f=25.18;
	char c='@';
	void *ptr;
	
	ptr=&n;
	cout<< "value of n is" <<n<<endl;
	cout<< " address of n"<<ptr<<endl;
	
	ptr=&f;
	cout<< "value of f" <<f<<endl;
	cout<< " address of f"<<ptr<<endl;
	
	ptr=&c;
	cout<< "value of c" <<c<<endl;
	cout<< " address of c"<<ptr<<endl;
return 0;
}-------*/
	
int *p1,*p2,s;
cout<<" enter integer"<<endl;
cin>>*p1;

cout<<" enter integer"<<endl;
cin>>*p2;
s = *p1 + *p2;
cout<< " sum is"<<s<<endl;
return 0;
}
