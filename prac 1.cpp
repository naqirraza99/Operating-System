#include<iostream>
using namespace std;
int main()
{
	int n;
	int marks[n];
cout<< " enter array values"<<endl;
	cin>>n;
	
	cout<<" Enter array values"<<endl;
	
	for(int i=0;i<n;i++)
	cin>>marks[i];
	
	cout<< " The values of arrays are"<<endl;
	
	for(int i=0;i<n;i++)
	cout<<marks[i];
	
	return 0;
}
