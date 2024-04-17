#include<iostream>
using namespace std;

void fact( int a, int b){
	int n;
cout<< " enter number"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
	if(n%i==0)
	cout<<i<<"\t";
}
}
int main()
{
int x,y;
fact(x,y);
return 0;
}

