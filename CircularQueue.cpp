#include<iostream.h>
#include<conio.h>
class circularqueue{
	public:
	int f,r,size;
	int *arr;
};
//queue* q;
int isfull(circularqueue *q)
{
	if((q->r+1)%q->size==q->f)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enque(circularqueue *q,int val)
{
	if(isfull(q))
	{
		cout<<"Queue is Full"<<endl;

	}
	else
	{       cout<<"enqueud element "<<val<<endl;
		q->r=(q->r+1)%q->size;
		q->arr[q->r]=val;
	}
}
int isempty(circularqueue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int deque(circularqueue*q)
{
	int value=-1;
	if(isempty(q))
	{
		return 1;
	       //	cout<<"Queue is Empty"<<endl;
	}
	else{

		q->f=(q->f+1)%q->size;
		value=q->arr[q->f];
	}
	return value;
}
void main()
{
	clrscr();
	circularqueue *q=new circularqueue();
	q->f=q->r=0;
	q->size=4;
	q->arr=new int;
	enque(q,100);
	enque(q,200);
	enque(q,300);
	enque(q,400);
		cout<<"dequeing  element "<<deque(q)<<endl;
		cout<<"dequeing  element "<<deque(q)<<endl;
		cout<<"dequeing  element "<<deque(q)<<endl;
		cout<<"dequeing  element "<<deque(q)<<endl;
		enque(q,500);
		enque(q,600);
		enque(q,700);

	if(isfull(q))
	{
		cout<<"full";
	}
	if(isempty(q))
	{
		cout<<"empty";
	}
	getch();
}


