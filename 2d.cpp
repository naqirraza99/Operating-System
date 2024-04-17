#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int naqi[n][m];
	for( int i=0;i<n;i++)//rows
	{
		for(int j=0;j<m;j++)
		{		
	cin>>naqi[i][j];
		}
}
	cout<< " the matrix is :";
	for( int i=1;i<n;i++)//rows
	{
		for(int j=1;j<m;j++){//columns
	
	cout<<naqi[i][j]<<" ";
	}
	cout<<endl;	
}
return 0;
}
