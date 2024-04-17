#include<iostream>
using namespace std;

struct Node{
    int val;
    Node*next;
};
class mystack{

    Node*head;
    int stacksize;
    public:
mystack()
{
    head=NULL;
    stacksize=0;
}

void push(int g)
{
        Node*temp=new Node();
        temp->val=g;
        head->next=temp;
        temp=head;
        cout<<"Element"<<g<<"is pushed"<<endl;
        stacksize++;
}
void pop()
{
    Node*temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    cout<<"Stack is poped"<<endl;
    stacksize--;
}

int top()
{
       if(head==NULL)
    {
           cout<<"Stack is not topped!"<<endl;
            return -1;
    }
       cout<<"stack is topped!"<<head->val<<endl;
            return head->val;
}

int size()
{
    cout<<"Size of stack is"<<stacksize<<endl;
    return stacksize;
}
int empty()
{
    if(head==NULL)
    {
        cout<<"Stack is empty"<<endl;
        return 1;
    }
    cout<<"stack is not empty"<<endl;
    return 0;
}
};
int main()
{
    mystack s1;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.pop();
    s1.top();
    s1.size();
    s1.empty();
    return 0;
}
