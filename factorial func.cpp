/*#include <iostream>
using namespace std;
//function type-name(arguments)
int fact(int n ){
    int factorial=1;
    for(int i=2;i<=n;i++)
     factorial= factorial*i;
    return factorial;
}
int main()
{
    int x;
    cout<< " enter value";
    cin>> x;
    cout<< " the answer of factorial is:"<<fact(x)<<endl;
    return 0;
}*/
 #include<iostream>
 using namepsace std;
 int main()
 {
int n;
cout<<" Enter weekday:"<<endl;
cin>>n;
switch(n)
{
    case 1:
        cout<<" Friday";
        break;
    case 2:
        cout<<" Saturday";
        break;
    case 3:
        cout<<" Monday:";
        break;
    case 4:
        cout<<" Tuesday:";
        break;
    case 5:
        cout<<" Wednesday:";
        break;
    case 6:
        cout<<" Thursday:";
        break;
    case 7:
        cout<<" Sunday:";
        break;
    default:
        cout<<" Invalid number";
}
return 0;
 }
