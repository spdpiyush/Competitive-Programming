//CodeChef Problem : Courses in a University (MAY17)
//Problem Code : UNICOURS
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,i,pr,count;
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&pr);
			if((pr)!= (i-1))
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
