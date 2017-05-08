//CodeChef Problem : Sticks (Beginner)
//Problem Code : STICKS
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[1005],i,j,temp,k,area,count_l,count_b,l,b,p1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		area=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]<no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		count_l=0;
		if(n>=4)
		{
			for(i=0;i<n-1;i++)
			{
				if(no[i]==no[i+1])
				{
					l=no[i];
					p1=i;
					count_l++;
				}
				else if(no[i]>l)
				l=no[i];
				if(count_l>0)
				break;
			}
			count_b=0;
			for(j=p1;j<n-2;j++)
			{
				if(no[j]!=no[j+1])
				{
					if(no[j+1]==no[j+2])
					{
						b=no[j+1];
						count_b++;
					}
				}
				if(count_b>0)
				break;
			}
			if(count_l>0 && count_b>0)
			printf("%d\n",l*b);
			else
			printf("-1\n");
		}
		else
		printf("-1\n");
	}
	return 0;
}


