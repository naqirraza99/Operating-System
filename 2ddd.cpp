/*#include<iostream>
using namespace std;
int main()
{
	int arr[2][4];
	for(int i=0;i<2;i++)
	for(int j=0;j<4;j++)
	{
		cout<<" Enter an integer"<<endl;
		cin>>arr[i][j];
		}
		
		{
			for(int i=0;i<2;i++)
			{
			
			for(int j=0;j<4;j++)
			cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		return 0;
}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int naqi[2][4];
	for(int i=0;i<2;i++)
	for(int j=0;j<4;j++)
	{
		cout<<" enter an integer"<<endl;
		cin>>naqi[i][j];
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		cout<<naqi[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}--------------------*/
	
#include<iostream>
using namespace std;
int main()
{
	/*int naqi[2][4]={{1,2,3,4},
					{5,6,7,8}};
for(int i=0;i<2;i++)
	{
	y66	for(int j=0;j<4;j++)
		cout<<naqi[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}*/	
int max,min,i,j;
int arr[2][4]={{1,2,3,4},{5,6,7,8}};
max=min=arr[0][0];
for( i=0;i<2;i++)
	for( j=0;j<4;j++)
{
	if(arr[i][j]>max)
	max=arr[i][j];						
	if(arr[i][j]<min)
	min=arr[i][j];
}
	cout<<" maximun="<<max<<endl<<"minimum="<<min<<endl;
	return 0;
}
					
	
