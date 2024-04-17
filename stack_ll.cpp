/*#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
	
};
class mystack{
	Node*head;
	int stacksize;
	
	public:
		mystack(){
			head=NULL;
			stacksize=0;
		}
		
	void push(int g)
	{
		Node* new_node= new Node();
		new_node->val=g;
		new_node->next=head;
		head=new_node;
		
		cout<<"Element"<<g<<"is pushed into stack!"<<endl;
		stacksize++;
		}	
	void pop()
	{
		if(head==NULL)
		{
			cout<<"stack is empty:"<<endl;
			return;
		}
	Node* temp=head;
	head=temp->next;
	temp->next=NULL;
	delete temp;
	cout<<"Stack is poped!"<<endl;	
		stacksize--;
	}
	int top()
		{
			if(head==NULL){
				cout<<"No top element!"<<endl;
				return -1;
		}
			cout<<"The top element is"<<head->val<<endl;
			return head->val;
}
	int size()
	{
		cout<<"size of stack is"<<stacksize<<endl;
		return stacksize;
	}
	
	int empty()
		{
			if(head==NULL)
			{
				cout<<"stack is empty!"<<endl;
				return 1;
			}
			cout<<"stack is not empty"<<endl;
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
	s1.push(40);
	s1.pop();
	s1.size();
	s1.empty();
	
	return 0;
}*/
#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
};
class mystack{
	int stacksize;
	Node* head;
public:
mystack()
{
	head=NULL;
	stacksize=0;
}
void push(int g){
	Node*new_node=new Node();
	new_node->val=g;
	new_node->next=head;
	head=new_node;
cout<<"Element"<<g<< "is pushed!"<<endl;
stacksize++;	
}
void pop(){

	Node*temp=head;
	head=temp->next;
	temp->next=NULL;
	delete temp;
	
	cout<<"The element is poped!"<<endl;
	stacksize--;
}
int top()
{
	if(head==NULL)
	{
		cout<<"Not popped!"<<endl;
		//return -1;
	}
	cout<<"The element is topped"<<head->val<<endl;
	return head->val;
}
int size()
{
	cout<<"the size of stack is"<<stacksize<<endl;
	return stacksize;
}
int empty()
{
	if(head==NULL)
	{
		cout<<"Stack is empty"<<endl;
	return 0;
	}
	cout<<"stack is not empty"<<endl;
	return -1;
}
};
int main()
{
	mystack s1;
	s1.empty();
	s1.push(10);
	s1.push(898);
	s1.push(456);
	s1.push(265);
	s1.top();
	s1.pop();
	s1.size();
	s1.empty();

	return 0;
}


