#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node* next;
};
node* head;
node* delete_at_first(node* head)
{
	  node* ptr=head;
	  head=head->next;
	  delete(ptr);
	  return head;
}
node* delete_at_index(node* head,int index)
{
	node*p=head;
	node*q=head->next;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	delete(q);
	return head;
}
node* delete_at_end(node* head)
{
	node*p=head;
	node*q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	delete(q);
	return head;
}
node* delete_at_givenvalue(node* head,int value)
{
	node*p=head;
	node*q=head->next;
	while(q->data!=value && q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	if(q->data==value)
	{
		p->next=q->next;
		delete(q);
	}
	return head;
}


void display(node*head)
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}

}

void main()
{
	clrscr();
	node*head=new node();
	node*second=new node();
	node*third=new node();
	node*fourth=new node();
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data=4;
	fourth->next=NULL;
	display(head);
	cout<<"\nlink list after deletion"<<endl;
   //   head=delete_at_first(head);
   //	head=delete_at_index(head,1);
  //	head=delete_at_end(head);
	head=delete_at_givenvalue(head,2);
  display(head);
	getch();
}
