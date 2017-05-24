//CodeChef Problem : Median of adjacent (MAY17)
//Problem Code : MXMEDIAN
//Author : Piyush
#include<stdio.h>
void swap(int [],int,int);
int main()
{
	int t,n,no[100001],i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<2*n+1;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=1;i<2*n;i++)
		{
			for(j=i+1;j<2*n+1;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		printf("%d\n",no[n+n/2+1]);
		swap(no,2,n+1);
		for(i=1;i<2*n+1;i++)
		{
			printf("%d ",no[i]);
		}
		printf("\n");
	}
	return 0;
}
void swap(int no[],int l,int h)
{
	int ne=h,tmp;
	while(l<ne)
	{
		tmp=no[l];
		no[l]=no[h];
		no[h]=tmp;
		l+=2;
		h++;
	}
	if(l<h)
	swap(no,l,h);
}
