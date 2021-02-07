#include<iostream.h>
#include<conio.h>
class queue{
	public:
	int data;
	queue *next;
};
queue *f=NULL;
queue *r=NULL;

int isfull(queue* n)
{
	if(n==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enque(int val)
{
     queue*n;
     n=new queue();
     if(isfull(n))
     {
	cout<<"queue is full"<<endl;
     }
     else
     {
	n->data=val;
	n->next=NULL;
	if(f==NULL)
	{
		f=r=n;
	}
	else{
		r->next=n;
		r=n;
	}
     }
}
int deque()
{
     queue*n;int val=-1;
     n=f;
     if(f==NULL)
     {
	cout<<"queue is empty"<<endl;
     }
     else
     {
	f=f->next;
	val=n->data;
	delete(n);

     }
      return val;

}
void display(queue*ptr)
{
	cout<<"printing the elements of the link list:"<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
void main()
{
	clrscr();


	enque(34);
	enque(56);
	enque(78);
      //	cout<<"dequing ele"<<deque()<<endl;
	cout<<"dequing ele"<<deque()<<endl;
		cout<<"dequing ele"<<deque()<<endl;
			cout<<"dequing ele"<<deque()<<endl;
				cout<<"dequing ele"<<deque()<<endl;
	display(f);
	getch();
}
