#include<iostream>
using namespace std;

class Node{
	int val;
	Node* next;

	Node(int data)
	{
		val=data;
		next=NULL;
	}
};




void insert_tail(Node* &tail,int val)
{
	Node*n=new Node(val);
	Node*temp=head;
	while(temp->next!=NULL)
		{
			temp=temp->next;
			temp->next=n;
			
		}
int main();
{
	Node*temp=head;
	insert_tail(head,3);
}
	
}
