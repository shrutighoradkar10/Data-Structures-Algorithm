#include<iostream.h>
#include<conio.h>
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void deletion(int arr[],int size,int index)
{
	for(int i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
}
void main()
{
	clrscr();
	int arr[100]={7,8,12,27,88};
	int size=5,element=45,index=4;
	display(arr,size);
	deletion(arr,size,index);
	size-=1;
	cout<<"\n";
       	display(arr,size);
	getch();
}
