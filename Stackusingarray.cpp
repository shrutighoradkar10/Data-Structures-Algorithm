#include<iostream.h>
#include<conio.h>
class stack{
	public:
	int top;
	int *arr;
	int size;
};
int isfull(stack *ptr)
{
	    if(ptr->top==ptr->size-1)
	    {
		return 1;
	    }
	    else
	    {
		return 0;
	    }
}
int isempty(stack *ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(stack *ptr,int value)
{
	if(isfull(ptr))
	{
		cout<<"Stack is full";
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]= value;

	}
}
int pop(stack *ptr)
{
	if(isempty(ptr))
	{
		cout<<"underflow stack";
		return -1;
	}
	else
	{
		int data;
		data=ptr->arr[ptr->top];
		ptr->top--;
		return data;
	}
}

void main()
{
	clrscr();
	stack *sp=new stack();
	sp->size=10;
	sp->top=-1;
	sp->arr=new int;
	cout<<isfull(sp)<<endl;
	cout<<isempty(sp)<<endl;
	push(sp,9);
	push(sp,11);
	push(sp,12);
	push(sp,13);
	cout<<"pop "<<pop(sp)<<"from the stack";
	getch();
}
