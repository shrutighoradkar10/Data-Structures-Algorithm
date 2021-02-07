#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node* next;
};
void display(node *head)
{
	node* ptr=head;
	while(ptr->next!=head)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<ptr->data;
}
node* insert_At_first(node* head,int value)
{
	node*ptr=new node();
	ptr->data=value;
	node* p=head->next;
	while(p->next!=head)
	{
		p=p->next;
	} //at this point p points to last node of circuler link list
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
void main()
{
	clrscr();
	node* head=new node();
	node* second=new node();
	node* third=new node();
	node* fourth=new node();
	head->data=0;
	head->next=second;
	second->data=1;
	second->next=third;
	third->data=2;
	third->next=fourth;
	fourth->data=3;
	fourth->next=head;
	head=insert_At_first(head,80);
	display(head);
	getch();
}
