#include<iostream.h>
#include<conio.h>
void display(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
void InsertionSort(int A[],int n)
{
	int j,key;
	for(int i=0;i<n;i++)   //for no of passes
	{
		key=A[i];
		j=i-1;
		while(j>=0 && A[j]>key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
void main()
{
	clrscr();
	int arr[6]={12,54,65,7,23,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Array before Sorting:"<<endl;
	display(arr,n);
	cout<<"After Soarting: "<<endl;
	InsertionSort(arr,n);
	display(arr,n);

	getch();

}
