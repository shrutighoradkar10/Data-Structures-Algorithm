#include<iostream.h>
#include<conio.h>
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void insert(int arr[],int size,int index,int element)
{
	for(int i=size;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
}
void main()
{
	clrscr();
	int arr[100]={7,8,12,27,88};
	int size=5,element=45,index=4;
	display(arr,size);
	insert(arr,size,index,element);
	size+=1;
	cout<<"\n";
	 display(arr,size);
	getch();
}
