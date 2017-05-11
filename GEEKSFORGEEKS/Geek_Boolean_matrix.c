//GeeksForGeeks Problem : Boolean Matrix Problem (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,r,c,ar1[22][22],arr[22][22]={0},i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<22;i++)
		{
			for(j=0;j<22;j++)
			{
				arr[i][j]=0;
			}
		}
		scanf("%d%d",&r,&c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&ar1[i][j]);
			}
		}
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(ar1[i][j]==1)
				{
					for(k=0;k<c;k++)
					{
						arr[i][k]=1;
					}
					for(k=0;k<r;k++)
					{
						arr[k][j]=1;
					}
				}
				
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
