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

int main()
{
	Node*n=new Node(1); 		//create a node
	cout<<n->val<<endl;
	cout<<n->next<<endl;
	
	return 0;
}
