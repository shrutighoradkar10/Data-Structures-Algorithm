#include<iostream.h>
#include<conio.h>
int top=-1;int maxsize=5;int stack[5];
int isfull()
{
	if(top==maxsize-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int data)
{
	if(isfull())
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
			top++;
		stack[top]=data;

	}
}
int pop()
{
	if(isempty())
	{
		return 1;
	       //	cout<<"underflow";
	}
	else
	{
		int val;
		val=stack[top];
		top--;
		return val;
	}
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<endl;
	}
}
void peek()
{
	cout<<"peek element is "<<stack[top];
}
void maxele()
{
	if(isempty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		int max;
		max=stack[0];
		for(int i=0;i<=top;i++)
		{
			if(stack[i]>max)
			{
			     max=stack[i];
			}

		}
			cout<<max<<endl;
	}
}
void main()
{
	clrscr();
	push(355);
	push(4);
	push(5);
	push(6);
	push(7);
	push(44);
	push(88);
	display();
	cout<<endl<<"Stack after popping"<<endl;
	pop();
	display();
	peek();
	cout<<endl;
	maxele()  ;
	getch();
}
