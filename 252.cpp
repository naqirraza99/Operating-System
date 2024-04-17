#include<iostream>
using namespace std;
int main()
{


int naqi[2][3];
for(int i=0;i<2;i++)
	for(int j=0;j<3;j++)
	{
		cout<<" enter an integer";
		cin>>naqi[i][j];
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		cout<<naqi[i][j]<<"\t";
		cout<<endl;
	}
return 0;
}
