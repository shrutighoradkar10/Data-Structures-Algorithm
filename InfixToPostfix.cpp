#include<iostream.h>
#include<conio.h>
#include<string.h>
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
int stacktop(stack* sp)
{
	return sp->arr[sp->top];
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
int precedence(char ch)
{
	if(ch=='*' || ch=='/')
		return 3;
	else if(ch=='+' || ch=='-')
		return 2;
	else
		return 0;
}
int isopr(char ch)
{
	if(ch=='+' || ch=='-' ||ch=='*'||ch=='/')
		return 1;
	else
		return 0;
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
char infix_to_postfix(char *infix)
{
	stack *sp=new stack();
	sp->size=100;
	sp->top=-1;
	sp->arr=new char;
	char *postfix;
	int i=0,j=0;
	while(infix[i]!='\0')
	{
		if(!isopr(infix[i])){
			postfix[j]=infix[i];
			j++;
			i++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(sp))){
				push(sp,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(sp);
				j++;
			}
			postfix[j]='\0';
			return postfix;
		}
	}
}

char stacktop(stack* sp)
{
	return sp->arr[sp->top];
}
void main()
{
	clrscr();
	char infix="x-y/z-k*d;
	cout<<"postfix is "<<infix_to_postfix(infix));
	getch();
}

