#include<iostream.h>
#include<conio.h>
void SelectionSort(int a[],int n)
{
	int indexofmin,temp;
	for(int i=0;i<n-1;i++)
	{
		indexofmin=i;
		for(int j=i+1;j<n;j++)
		{
		       if(a[j]<a[indexofmin])
		       {
				indexofmin=j;

		       }
		       temp=a[i];
		       a[i]=a[	indexofmin];
		       a[	indexofmin]=temp;

		}
	}
}
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}
void main()
{
	clrscr();
	int a[]={4,3,7,111,0};
	int n=sizeof(a)/sizeof(a[0]);
	SelectionSort(a,n);
	cout<<"Sorted Array:"<<endl;
	display(a,n);
	getch();
}


