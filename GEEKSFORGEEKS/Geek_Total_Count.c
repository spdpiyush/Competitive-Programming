//GeeksForGeeks Problem : Total Count (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,k,i,sum,q,r;
	long int no[1005];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			q=no[i]/k;
			if(no[i]%k != 0)
			{
			  r=1;	
			}
			else
			r=0;
			sum = sum + (q + r);
		}
		printf("%d\n",sum);
	}
	return 0;
}
