//GeeksforGeeks Problem : swap all odd even bits(Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[8],i,j,temp,sum,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<8;i++)
		{
			no[i]=0;
		}
		j=7;
		while(n)
		{
			no[j]=n%2;
			n=n/2;
			j--;
		}
		for(i=0;i<8;i=i+2)
		{
			temp=no[i];
			no[i]=no[i+1];
			no[i+1]=temp;
		}
		sum=0;
		p=1;
		for(i=7;i>=0;i--)
		{
			sum=sum+(no[i]*p);
			p=p*2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
