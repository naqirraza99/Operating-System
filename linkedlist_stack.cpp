#include<iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

class mystack
{
    public:
    Node* head;
    int stacksize;

    public:
    mystack()       //constructor
    {
        head=NULL;
        stacksize=0;
    }
    void push(int g)
    {
        Node* temp=new Node();
        temp->value=g;
        temp->next=head;
        head=temp;

        cout<<"Element " << g << " push into the stack"<<endl;
        stacksize ++;

    }
    void pop()
    {
        if (head==NULL)
        {
        cout<<"stack is empty! Cannot Poped"<<endl;
        }
 
    Node *temp=head;
    head=temp->next;
    temp->next=head; 
    delete temp;

    cout<<"Element is poped!"<<endl;
    stacksize --;
    }
    int top()
    {
        if(head==NULL)
        {
            cout<<"No Toppped!Stack is empty"<<endl;
            return -1;
        } 
        cout<<"The top element is:"<<head->value<<endl;
        return head->value;
    }
    int size()
    {
        cout<<"Size of stack is:"<<stacksize<<endl;
        return stacksize;
    }
    int empty()
    {
        if(head==NULL)
        {
            cout<<"stack is empty"<<endl;
            return 1;
        }
            cout<<"Stack is not empty"<<endl;
            return 0;

    }

};
int main()
{
    mystack s1;
    s1.empty();
    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.pop();
    s1.top();

    s1.size();

    s1.empty();

    return 0;
}
