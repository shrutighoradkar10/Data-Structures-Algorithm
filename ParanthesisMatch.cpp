#include<iostream.h>
#include<conio.h>
class stack{
	public:
	int top;
	char *arr;
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
void push(stack *ptr,char value)
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
char pop(stack *ptr)
{
	if(isempty(ptr))
	{
		cout<<"underflow stack";
		return -1;
	}
	else
	{
		char data;
		data=ptr->arr[ptr->top];
		ptr->top--;
		return data;
	}
}
int paramatch(char* exp)
{
	stack* sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=new char;
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		{
			push(sp,'(');
		}
		else if(exp[i]==')')
		{
			if(isempty(sp))
			{
				return 0;
			}
			pop(sp)   ;
		}

	}
	if(isempty(sp)){
	return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	clrscr();
	char* exp="(4*3))+(8)";
	if(paramatch(exp))
	{
		cout<<"is matching";
	}
	else
	{
		cout<<"not matching";
	}



	getch();
}

