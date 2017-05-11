//GeeksForGeeks Problem : Sum of All Prime Numbers Between 1 and  (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,i,k,j,sum,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(i=2;i<=n;i++)
		{
			if(i==1 || i==n)
			{
				sum=sum+i;
				continue;
			}
			count=0;
			for(j=2;j<n;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==0)
			sum=sum+i;
		}
		printf("%d\n",sum);
	}
	return 0;
}

