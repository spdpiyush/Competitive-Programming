//CODECHEF Problem : Version Control System (Beginner)
//Problem Code : VCS
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,m,k,mo[105],ko[105],g,i,count,j,a,cnt;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%d%d",&n,&m,&k);
		for(i=0;i<m;i++)
		{
			scanf("%d",&mo[i]);
		}
		for(i=0;i<k;i++)
		{
			scanf("%d",&ko[i]);
		}
		if(m>k)
		g=m;
		else
		g=k;
	    cnt=0;
		count=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
				if(mo[i]==ko[j])
				{
					count++;
				}
			}
		}
		if(mo[m-1]>ko[k-1])
		a=mo[m-1];
		else
		a=ko[k-1];
	    
		printf("%d ",count);
		printf("%d\n",cnt);
	}
	return 0;
}
