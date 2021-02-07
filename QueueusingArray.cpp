#include<iostream.h>
#include<conio.h>
class queue{
	public:
	int f,r,size;
	int *arr;
};
queue* q;
int isfull(queue *q)
{
	if(q->r==q->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enque(queue *q,int val)
{
	if(isfull(q))
	{
		cout<<"Queue is Full"<<endl;

	}
	else
	{
		 cout<<"enqueud element "<<val<<endl;
		q->r++;
		q->arr[q->r]=val;
	}
}
int isempty(queue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int deque(queue*q)
{
	int value=-1;
	if(isempty(q))
	{
		return 1;
	       //	cout<<"Queue is Empty"<<endl;
	}
	else{

		q->f++;
		value=q->arr[q->f];
	}
	return value;
}
void main()
{
	clrscr();
	queue *q=new queue();
	q->f=q->r=-1;
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

