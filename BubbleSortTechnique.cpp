#include<iostream.h>
#include<conio.h>
void display(int * a,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
void bubblesort(int*a,int size)
{
	int temp;  int issorted=0;
	for(int i=0;i<size-1;i++)   //for no of passes
	{
		cout<<"worning on pass no"<<i+1<<endl;
		issorted=1;
		for(int j=0;j<size-1-i;j++)  //for comparison in each pass
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				issorted=0;
			}
		}
		if(issorted)
			return;
	}
}
void main()
{
	clrscr();
     //	int arr[5]={0,-1,-2,8,122};
	int arr[5]={1,2,3,4,0};
	int n=sizeof(arr)/sizeof(int);
	display(arr,n);
	cout<<endl;
	bubblesort(arr,n);
	display(arr,n);
	getch();
}
