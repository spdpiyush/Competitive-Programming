//CODECHEF Problem : Chef and Dolls (Beginner)
//Problem Code : MISSP
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[100002],l=1,i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		l=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			if(no[i]>l)
			l=no[i];
		}
		for(i=1;i<=l;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(i==no[j])
				count++;
			}
			if(count%2!=0)
			{
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
