#include<iostream>
using namespace std;


class Node
{
	public:
	int data;
	Node*next;
	
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};
void printlist(Node*n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
void insert_head(Node*&head,int val)
{
	Node *first=new Node(val);
	first->next=head;
	head=first;
}
void insert_tail(Node* &head,int val)
{
	Node*n=new Node(val);
		
		if(head==NULL){
		head=n;
		return;
	}
	
	Node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
int main()
{
	Node*head=NULL;
	insert_head(head,5);
	insert_tail(head,1);
	insert_tail(head,2);
	insert_tail(head,3);
	insert_tail(head,4);
	printlist(head);
	return 0;
	
}
