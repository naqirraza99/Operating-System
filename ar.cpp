#include<iostream>
using namespace std;
int main()
{
	/*int marks[5]={10,20,30,40,50};
	cout<< marks[0]<<endl;
	cout<< marks[1]<<endl;
	cout<< marks[2]<<endl;
	cout<< marks[3]<<endl;
	cout<< marks[4]<<endl;*/
	/*for (int i=0;i<5;i++)
	cout<< " the marks of " << i <<" is " <<marks [i] <<endl;
	int add;
	add= marks[0] + marks[1];
	cout<<" the sum of two numbers are"  <<endl<<add;
	return 0;
}*/
int n;
cin>>n;
int input[n];


for(int i =0;i<n;i++)
{
cin>>input[i] ;
}


for(int i =0;i<n;i++)
{
cout<< input[i]<< " ";
}
return 0;
}
