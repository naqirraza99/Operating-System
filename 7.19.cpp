#include<iostream>
using namespace std;
int main()
{
	int arr[3][2];
	int i,j,sum=0;
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	{
		cout<<" Enter arrays:"<<endl;
		cin>> arr[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=2;j<2;j++)
		{
		cout<<arr[i][j]<< " ";		
		sum=sum + arr[i][j];
		}
		cout<<endl;
	}
	cout<<"Sum="<<sum;

	return 0;
}
