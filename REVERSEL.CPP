#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node*next;
};
void display(node*head)
{
	node*ptr=head;   int l=0;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
		l++;
	}

}
node* reverse(node* head)
{
	int len=0;
	node* c=head;
	while(c!=NULL)
	{
		c=c->next;
		len++;
	}
	int i,j;
	node*p,*q;
	int temp;
	i=0;
	j=len-1;
	p=q=head;
	while(i<j)
	{
		int k=0;
		while(k<j)
		{
			q=q->next;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->next;
		q=head;
	}
	return head;
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
	head=reverse(head);
	cout<<"\nAfter reversing"<<endl;
	display(head);
	getch();
}