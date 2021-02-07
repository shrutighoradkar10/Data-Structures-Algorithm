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
void in_order_traversal(node * root)
{
	if(root!=NULL)
	{
		in_order_traversal(root->left);
			cout<<root->data<<"  ";
		 in_order_traversal(root->right);


	}
}

void main()
{
	clrscr();

       node* p=create_node(4);
       node* p1=create_node(1);
       node * p2=create_node(6);
       node * p3=create_node(5);
       node * p4=create_node(2);
       p->left=p1;
       p->right=p2;
       p1->left=p3;
       p1->right=p4;
       in_order_traversal(p);
       getch();
}
