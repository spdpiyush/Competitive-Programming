//GeeksForGeeks PRoblems : Find Differnce Between Sum of Diagonal (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,i,j,a[51][51],n,sum1,sum2,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		sum1=0;
		sum2=0;
		for(i=0,j=n-1;i<n;i++,j--)
		{
			sum1=sum1+a[i][i];
			sum2=sum2+a[i][j];
		}
		sum = sum1 - sum2;
		if(sum<0)
		sum = (-1) * sum;
		printf("%d\n",sum);
	}
	return 0;
}

