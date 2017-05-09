//CodeChef Problem : Courses in a University (MAY17)
//Problem Code : UNICOURS
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,i,pr[100002],count,p;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&pr[i]);
		}
		count=0;
		p=0;
		for(i=n-1;i>=p;i--)
		{
			if(pr[i]>p)
			p=pr[i];
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
