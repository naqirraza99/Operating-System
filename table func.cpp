#include<iostream>
using namespace std;
//functionprototype syntax;
// functiontype-name (arguments)
int cal(int a, int b)
{
	char opt;
	
	
	switch(opt)
	{
		case '+':
		cout<< a+b;
		break;
	
	case '-':
	cout<< a-b;
	break;
	
	case '*':
	cout<< a-b;
	break;

	case '/':
	cout<< a-b;
	break;
	
}
}
int main()
 {
	int o,i,c;
	cout<< "enter 1st and 2nd value"<<endl;
	cin>>i>>c;
	cout<< " enter operator"<<endl;
	cin>>o;
	cout<< " the answer is"<<cal(i,c)<<endl;
	return 0; 
	
}

