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
	n->data=val;
	n=new node();
	n->right=NULL;
	n->left=NULL;
	return n;
}
void main()
{
	clrscr();
	/*
	node *p=new node;
	p->right=NULL;
	p->left=NULL;
	p->data=2;

	node *p1=new node;
	p1->right=NULL;
	p1->left=NULL;
	p1->data=1;
	*/
       node* p=	create_node(4);
       node* p1=create_node(55);
       node * p2=create_node(5);
       p->left=p1;
       p->right=p2;



	getch();
}
