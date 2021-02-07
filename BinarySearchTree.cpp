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
void pre_order_traversal(node * root)
{
	if(root!=NULL)
	{
		cout<<root->data<<"  ";
		 pre_order_traversal(root->left);
		 pre_order_traversal(root->right);
	}
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
       pre_order_traversal(p);
       if(isBST(p))
		cout<<"YES";
       else
		cout<<endl<<"NO";
       getch();


}
