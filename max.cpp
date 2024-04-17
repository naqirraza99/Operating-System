#include<iostream>
using namespace std;
int main()
{
int max,min,i,j;
int arr[2][4]={{1,2,3,4},{5,6,7,8}};
max=min=arr[0][0];
for( i=0;i<2;i++)
	for( j=0;j<4;j++)
{
	if(arr[i][j]>max)
	max=arr[i][j];			}			
	if(arr[i][j]<min)
	min=arr[i][j];
}
	cout<<"maximun="<<max<<endl<<"minimum="<<min<<endl;
	return 0;
}
	
