#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> stack)
{
    while(!stack.empty())
    {
        cout<<stack.top()<<endl;  //top
        stack.pop();
    }
}

int main()
{
    //empty,size,push,top,pop

stack<int>newstack;     //creating stack
newstack.push(1);     
newstack.push(2);  //push
newstack.push(3);
newstack.push(4);

//newstack.pop(); //pop

if(newstack.empty())
    
        cout<<"stack is empty:"<<endl;  //empty stack
    
else
    cout<<"Stack is not empty:"<<endl;

    cout<<"Stack size is:"<<newstack.size()<<endl;   //stack size

display(newstack);

return 0;

}
