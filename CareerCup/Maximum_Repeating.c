/* Program To Print List of the Maximmum Repeating Number From an Array
-------Question From CareerCup------------
Link Of The Question -----https://www.careercup.com/question?id=4808737102495744
---*/
#include<stdio.h>
int main()
{
	int ar[]={1,2,1,0,5,2,4,2,3,0,1,3,2,4},a[10]={0},i,b[10]={0,1,2,3,4,5,6,7,8,9},j,temp;
	for(i=0;i<sizeof(ar)/sizeof(ar[0]);i++)
	{
		++a[ar[i]];
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		printf("%d ",b[i]);
	}
	return 0;
}
