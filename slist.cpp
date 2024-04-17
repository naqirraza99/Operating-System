#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node* next;
		
		Node(int data)
		{
			val=data;
			next=NULL;
		}
};
void insert_head(Node*&head,int val){
	Node *n=new Node(val);
	n->next=head;
	head=n;
}
display(Node*head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<endl;
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void insert_tail(Node* &tail,int val)
{
	Node*temp=new Node(val);
//	Node*temp=head;
//	while(temp->next!=NULL)
//		{
//			temp=temp->next;
//			temp->next=n;
//			
//		}

	tail->next=temp;
	tail=temp;
}
int main()
{
	Node*head=NULL;
	insert_head(head,20);
	display(head);
	
	insert_head(head,25);
	display(head);
	

	insert_tail(head,30);
	display(head);
	
	return 0;
}
