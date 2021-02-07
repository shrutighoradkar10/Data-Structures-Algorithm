#include<iostream.h>
#include<conio.h>
int binarysearch(int arr[],int size,int ele)
{
	int low,mid,high;
	low=0;

	high=size-1;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==ele)
		{
			return mid;
		}
		if(arr[mid]<ele)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
void main()
{
	clrscr();
	int arr[]={1,2,3,4,5,6,7};
	int size=sizeof(arr)/sizeof(int);
	int ele=0;
	int searchindex=binarysearch(arr,size,ele);
	cout<<ele<<" found at "<<searchindex;
	getch();
}
