//CodeChef Problem : Racing Horses (Easy)
//Problem Code : HORSES
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[5000],i,j,di[5000],d,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			di[i]=no[i+1]-no[i];
			if(di[i]<0)
			di[i]=(-1)*di[i];
			for(j=i+1;j<n;j++)
			{
				d=no[i]-no[j];
				if(d<0)
				d=(-1)*d;
				if(d<di[i])
				di[i]=d;
			}
		}
		s=di[0];
		for(i=1;i<n-1;i++)
		{ 
		  if(di[i]<s)	
		  s=di[i];
		}
		printf("%d\n",s);
	}
	return 0;
}
