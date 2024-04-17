#include<iostream>
using namespace std;
int main()
{
		
int a,b,*p1,*p2,s;
p1=&a;
p2=&b;
cout<<" enter integer"<<endl;
cin>>*p1;

cout<<" enter integer"<<endl;
cin>>*p2;
s = *p1 + *p2;
cout<< " sum is"<<s<<endl;
return 0;
}
