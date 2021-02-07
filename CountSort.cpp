#include<iostream.h>
#include<conio.h>
void display(int *A,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
int maxele(int *A,int n)
{
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		if(max<A[i])
		{
			max=A[i];
		}
	}
	return max;
}
void count_sort(int *A,int n)
{
	int i,j;
	int max = maxele(A,n);   //for findingmax element
	int *countarr=new int;   //create the count array
	for( i=0;i<max+1;i++) //intilize the element to 0
	{
		countarr[i]=0;
	}
	for( i=0;i<n;i++)  //increment the corresponding index
	{
	       countarr[A[i]]=countarr[A[i]]+1;
	}
	 i=0; //counter  for countarr
	 j=0; //counter for main arr
	while(i<=max)
	{
		if(countarr[i]>0)
		{
			A[j]=i;
			countarr[i]--;
			j++;
		}
		else
		{
			i++;
		}
	}
}


void main()
{
	clrscr();
	int arr[7]={8,9,1,0,6,4,7};
	int n=sizeof(arr)/sizeof(int);

	cout<<"Array before Sorting:"<<endl;
	display(arr,n);
	count_sort(arr,n);
	cout<<endl;

	display(arr,n);


	getch();

}
