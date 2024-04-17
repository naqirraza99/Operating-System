#include<iostream>
using namespace std;
void table(int a, int b){

int n;
cout<<" enter number"<<endl;
cin>>n;
for(int i=1;i<=10;i++)
{
	cout<<n<<"*"<<i<<"="<<n*i;
}
}
int main()
{

	int x,y;
table(x,y);
return 0;
}
