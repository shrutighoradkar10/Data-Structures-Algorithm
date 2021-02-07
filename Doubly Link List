#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node* next;
	node* prev;
};
node* head;
node* prev;
void display(node *ptr,node*ptr1)
{
  //	node* ptr;
    //	node* ptr1;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" "<<endl;
		ptr=ptr->next;
	}
	while(ptr1!=NULL)
	{
		       cout<<ptr1->data<<" "<<endl;
		       ptr1=ptr1->prev;

	}

}
void main()
{
	clrscr();
	node* n1=new node();
	node*n2=new node();
	node*n3=new node();
	n1->data=1;
	n1->next=n2;
	n1->prev=NULL;

	n2->data=2;
	n2->next=n3;
	n2->prev=n1;

	n3->data=3;
	n3->next=NULL;
	n3->prev=n2;
	display(n1,n3);
	getch();
}
