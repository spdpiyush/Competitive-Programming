//GeeksForGeeks Problem : Check If the Door is Open or Closed (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,ne[1001],i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<1001;i++)
		{
			ne[i]=0;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j%i==0)
				{
					if(ne[j]==0)
					ne[j]=1;
					else
					ne[j]=0;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			printf("%d ",ne[i]);
		}
		printf("\n");
	}
	return 0;
}
