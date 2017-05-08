//CodeChef Problem : Chef and His Sequence(Beginner)
//Problem Code : CHEFSQ
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[100],f,fs[100],i,j,count,k;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		scanf("%d",&f);
		for(j=0;j<f;j++)
		{
			scanf("%d",&fs[j]);
		}
		for(i=0;i<f;i++)
		{
			k=0;
			for(j=0;j<n;j++)
			{
				if(fs[i]==no[j])
				{
					count++;
					k++;
				}
			}
			if(k==0)
			break;
		}
		if(count==f)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
} 
