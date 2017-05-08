//CodeChef Problem : Uncle Johny(Easy)
//Problem Code : JOHNY
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[101],k,i,j,temp,e;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		scanf("%d",&k);
		e=no[k-1];
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(no[i]==e)
			break;
		}
		printf("%d\n",i+1);
	}
	return 0;
}
