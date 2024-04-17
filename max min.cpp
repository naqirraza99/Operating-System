#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int number[n];
	
	for( int i=0;i<n;i++)
	{
		cin>>number[n];
	}
	
	int maxno=INT_MIN;
	int minno=INT_MAX;
	
	for( int i=0;i<n;i++){
		if(number[i]>maxno)
	{
		
		maxno=number[i];
	}
	if(number[i]<minno){
	minno=number[i]	;
	}
}
cout<< maxno<<endl<<minno<<endl;
return 0;
}

