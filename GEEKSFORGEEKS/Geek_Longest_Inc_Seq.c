//GeeksForGeeks Problem : Longest Increasing Subsequence(Medium)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,i,n,no[1002],count_f,count_b,l,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		count_f=1;
		count_b=1;
		l=no[0];
		s=no[n-1];
		for(i=1;i<n;i++)
		{
			if(no[i]>l)
			{
				l=no[i];
				count_f++;
			}
		}
		for(i=n-2;i>=0;i--)
		{
			if(no[i]<s)
			{
				s=no[i];
				count_b++;
			}
		}
		if(count_f>count_b)
		printf("%d\n",count_f);
		else
		printf("%d\n",count_b);
	}
	return 0;
}
