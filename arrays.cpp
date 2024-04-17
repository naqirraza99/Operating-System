/*#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	int sum=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter an integer:"<<endl;
		cin>>arr[i];
		sum=sum + arr[i];
		
	}
	int avg=sum/5;
	cout<<" the sum of array are:"<<endl;
	cout<<"sum is:"<<sum<<endl;
	cout<<"avg is"<<endl;
}
#include<iostream>
using namespace std;
int main()
{
	int n;
	int* ptr;
	cout<<"enter integer:"<<endl;
	cin>>n;
	ptr=&n;
	cout<<* ptr<<endl;
	cout<<ptr<<endl;
}*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamic memory allocation
    int* ptr = new int[n];

    // Assigning values to the dynamically allocated array
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Printing the values
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Deallocating the dynamically allocated memory
   

    return 0;
}


