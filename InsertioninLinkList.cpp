#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node* next;
};
node* head    ;
void display(node *head)
{
	node* ptr=head;
	while(ptr!=NULL)
	{
		       cout<<ptr->data<<" ";
		       ptr=ptr->next;
	}
}
node* insert_at_begin(node *head,int data)
{
	node* ptr=new node();
	ptr->data=data;
	ptr->next=head;
	return head; 

}
node* insert_at_index(node *head,int data,int index)
{
	node* ptr=new node();
	node* p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
node* insert_At_end(node* head,int data)
{
	node* ptr=new node();
	ptr->data=data;
	node*p=head;
	while(p->next!=NULL)
	{
		p=p->next;

	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
node* insert_at_afternode(node *head,node *prev,int data)
{
	node* ptr=new node();
	node* p=head;
	ptr->data=data;
	ptr->next=prev->next;
	prev->next=ptr;
	return head;
}

void main()
{
	clrscr();
	head=new node();
	node* second=new node();
	node* third=new node();
	head->data=78;
	head->next=second;
	second->data=98;
	second->next=third;
	third->data=88;
	third->next=NULL;

	display(head);
     //	head=insert_at_begin(head,56);
     //	head=insert_at_index(head,56,1);
	cout<<"\n";
     //	display(head);
     //	head=insert_at_index(head,50,3);
     //  head=insert_At_end(head,800);
	head=insert_at_afternode(head,second,45);
	head=insert_at_afternode(head,third,89);
	cout<<"\n";
	display(head);

	getch();
}
