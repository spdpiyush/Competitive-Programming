//CODECHEF Problem : The Smallest Pair.(Beginner)
//Problem Code : SMPAIR
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,n,sum,i,j,temp;
	long int no[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		sum=no[0]+no[1];
		printf("%d\n",sum);
	}
	return 0;
}
