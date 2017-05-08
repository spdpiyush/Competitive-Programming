#include<stdio.h>
int main()
{
	int t,no,a[100][100],i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&no);
		a[no];
		for(i=0;i<no;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<no;i++)
		{
			if(i==no-1)
			{
				sum=sum+a[i][1];
			}
			else
			{
				sum=sum+a[i][0];
			}	
	    }
	    printf("%d\n",sum);
    }
	return 0;
}
