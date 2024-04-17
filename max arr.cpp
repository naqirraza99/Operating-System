/*#include<iostream>
using namespace std;
int main()
{
	int num[5];
	int i,max;
	for(i=0;i<5;i++){
	
	cout<<" Enter array address"<<endl;
	cin>>num[i];
}
	max=num[0];
	for(i=0;i<5;i++)
	if(max<num[i])
	max=num[i];
	cout<< " the max value is:"<<max<<endl;

	return 0;
}-------------*/
	
	
# include<iostream>
using namespace std;
int main()
{
	int num[5];
	int min,i;
	
	for(i=0;i<5;i++)
{

	cout<<" enter array values:"<<endl;
	cin>>num[i];
}

min=num[0];

for(i=0;i<5;i++)
 if (min>num[i])
	min=num[i];
cout<<" the min value is:"<<min<<endl;	


	return 0;
}
