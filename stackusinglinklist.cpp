#include<iostream.h>
#include<conio.h>
class node{
	public:
	int data;
	node* next;
};
node * top=NULL;
void display(node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int isempty(node *top)
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull(node* top)
{
	node*p=new node();
	if(p==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
node* push(node* top,int x)
{
	if(isfull(top))
	{
		cout<<"stack is overflow";
	}
	else
	{
		node *n=new node();
		n->data=x;
		n->next=top;
		top=n;
		return top;
	}
}
int pop(node* tp)
{
	if(isempty(tp))
	{
		cout<<"stack is underflow";
	}
	else
	{
		node* n=tp;
		top=(tp)->next;
		int x=n->data;
		delete(n);
		return x;
	}
}
int peek(int pos)
{
	node* ptr=top;
	for(int i=0;(i<pos-1 && ptr!=NULL);i++)
	{
		ptr=ptr->next;
	}
	if(ptr!=NULL)
	{
		return ptr->data;
	}
	else
	{
		return -1;
	}
}
void main()
{
	clrscr();
	top=push(top,2);
	top=push(top,1);
	top=push(top,3);
	top=push(top,88);
	display(top);
	cout<<"stack after popping:"<<endl;
       //	pop(top);
	display(top);
	 cout<<"value at pos 1 is "<<peek(2);
	getch();
}
