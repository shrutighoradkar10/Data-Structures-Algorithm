#include<iostream.h>
#include<conio.h>
class node{
	public:
	node* left;
	node *right;
	int data;
};
node * create_node(int val)
{
	node* n;

	n=new node();
	n->data=val;
	n->right=NULL;
	n->left=NULL;
	return n;
}

int isBST(node* root)
{
	static node* prev=NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data)
		{
			return 0;
		}
		prev=root;
		return isBST(root->right);
	}
	else
		return 1;
}
node* search(node* root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	 if(root->data==key)
	{
		return root;
	}
	else if(root->data>key)
	{
		  return   search(root->left,key)    ;
	}
	else
	{
		return search(root->right,key);
	}
}
void main()
{
	clrscr();

	node* p=create_node(5);
       node* p1=create_node(3);
       node * p2=create_node(6);
       node * p3=create_node(1111);
       node * p4=create_node(4);
       p->left=p1;
       p->right=p2;
       p1->left=p3;
       p1->right=p4;
       node* n=search(p,51);

       if(n!=NULL)
		cout<<"YES "<<n->data;
       else
		cout<<"NO";
       getch();


}
