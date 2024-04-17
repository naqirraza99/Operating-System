#include<iostream>
using namespace std;

struct Node{
	int data;
	Node*left;
	Node*right;
	
	Node(int value)
	{
		data=value;
	}
};
Node* insert(Node*root ,int value)
{
	if(root==NULL)
	{
		return new Node(value);
	}
	 if (value<root->data)
	{
		root->left=insert(root->left,value);
	}
	else if(value>root->data)
	{
		root->right=insert(root->right,value);
	}
	else {
		return root;	
	} 
}
void display(Node* root)
{
    if (root != NULL)
    {
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }
}
Node*findmin(Node*root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}
//function to delete node
Node*deletenode(Node*root,int value)
{
	if(root==NULL){
	return root;
}
	if(value<root->data)
{
	root->left=deletenode(root->left,value);
}
	else if(value>root->data)
{
	root->right=deletenode(root->right,value);
}
	else{
		//delete one child node
		if(root->left==NULL)
		{
		Node*temp=root->right;
		delete root;
		return temp;
	}
	else if(root->right==NULL)
	{
		Node*temp=root->left;
		delete root;
		return temp;
	}
	//delete 2 children
	Node*temp=findmin(root->right);
	root->data=temp->data;
	root->right=deletenode(root->right,temp->data);
	
}
return root;
}
int main()
{
	Node*root=NULL;
	root=insert(root,50);
	insert(root,40);
	insert(root,30);
	insert(root,60);
	insert(root,70);
	insert(root,10);
	
	cout<<"initial values"<<endl;
	display(root);
	cout<<endl; 
	deletenode(root,30);
	display(root);
	
	return 0;
}
