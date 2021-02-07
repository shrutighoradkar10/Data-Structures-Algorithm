#include<iostream.h>
#include<conio.h>
int linear_search(int arr[],int size,int ele)
{
	int found;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
			return i;
		}
	}
	return -1;
}
void main()
{
	clrscr();
	int arr[100]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(int);
	int ele=10;

	int searchindex=linear_search(arr,size,ele);
      	 cout<<"The element "<<ele<< "found at index "<<searchindex  ;
	getch();
}
