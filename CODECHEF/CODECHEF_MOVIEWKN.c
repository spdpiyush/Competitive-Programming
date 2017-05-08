//CodeChef Problem : Movie Weekend (Beginner)
//Problem Code : MOVIEWKN
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,l[102],ans[102],r[102],re[102],in[102],i,j,max,count,r_count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&l[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&r[i]);
		}
		for(i=0;i<n;i++)
		{
			ans[i]=l[i]*r[i];
		}
		max=1;
		for(i=0;i<n;i++)
		{
			if(ans[i]>max)
			max=ans[i];
		}
		count=0;
		for(i=0,j=0;i<n;i++)
		{
			if(max == ans[i])
			{
				count++;
				in[j]=i;
				j++;
			}
		}
		max=1;
		if(count==1)
		{
			printf("%d\n",in[0]+1);
		}
		else
		{
		    for(i=0;i<n;i++)
			{
			  if(r[i]>max)	
			  {
			  	max=r[i];
			  }
			}
			r_count=0;	
			for(i=0,j=0;i<n;i++)
			{
				if(max==r[i])
				{
					r_count++;
					re[j]=i;
					j++;
				}
			}
			printf("%d\n",re[0]+1);
		}
	}
	return 0;
}
