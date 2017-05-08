//CodeChef Problem : One More Weird Game (Beginner)
//Problem Code : OMWG
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,m,i,j,sum,mat[1001][1001];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				mat[i][j]=0;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				mat[i][j]=1;
				if(j>0)
				{
					if(mat[i][j-1]==1)
					sum++;
				}
			}
			if(i>0)
			{
				if(mat[i-1][j]==1)
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
