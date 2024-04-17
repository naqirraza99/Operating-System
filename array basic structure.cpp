#include<iostream>
using namespace std;
int main()
{
	int naqi[2][2];
	
	for(int i=0;i<2;i++)   				//initialization for rows 
	{
		for(int j=0;j<2;j++) 			//initialization for columns
		{
		cout<< "Enter the elements of array :"<<endl;    	
		cin>>naqi[i][j];
		}
	}
	
	cout<<" The elements of array are:"<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<naqi[i][j]<<" ";
		cout<<endl;
	}
	
	
	return 0;
}
