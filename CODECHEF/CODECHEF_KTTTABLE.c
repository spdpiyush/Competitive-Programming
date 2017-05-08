//CodeChef Problem : Kitchen TimeTable ( Beginner)
//Problem Code : KTTIME
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,a[10002],b[10002],i,j,s,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		s=0;
		count=0;
		for(i=0;i<n;i++)
		{
			if((a[i]-s)>=b[i])
			count++;
			s=a[i];
		}
		printf("%d\n",count);
	}
	return 0;
}
