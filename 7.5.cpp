#include<iostream>
using namespace std;
int main()
{
	/*int arr[2][3];
	int i,j;
	
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	{
		cout<<" enter arrays:"<<endl;
		cin>>arr[i][j];
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	
			cout<<arr[i][j]<< " ";
			cout<<endl;
		
	}
	
	return 0;
}------------*/
int arr[2][3];
int i,j;

for(i=0;i<2;i++)
for(j=0;j<3;j++)
{
	cout<<"enter arrays"<<endl;
	cin>>arr[i][j];
}
cout<<endl;

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	cout<<arr[i][j]*2<<" ";
	cout<<endl;
}
return 0;
}
