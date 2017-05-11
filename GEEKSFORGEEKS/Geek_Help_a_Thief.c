//GeeksForGeeks Problem : Help a Thief!!!(Basic)
//Author: PIYUSH
#include<stdio.h>
int main()
{
	int t,nt,n,i,nb[22],nc[22],j,temp,s,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&nt);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&nb[i],&nc[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(nc[j]>nc[i])
				{
					temp=nc[i];
					nc[i]=nc[j];
					nc[j]=temp;
					temp=nb[i];
					nb[i]=nb[j];
					nb[j]=temp;
				}
			}
		}
		s=0;
		sum=0;
		i=0;
		while(s!=nt && i<n)
		{
			if(nb[i]==1) 
			{
				sum=sum+nc[i];
				i++;
			}
			else
			{
				sum=sum+nc[i];
				nb[i]--;
			}
			s++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
