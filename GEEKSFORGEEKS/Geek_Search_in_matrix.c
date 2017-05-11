//GeeksForGeeks Problem : Search in a Matrix (Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[1000],i,r,c,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&r,&c);
		for(i=0;i<r*c;i++)
		{
			scanf("%d",&no[i]);
		}
		scanf("%d",&n);
		count=0;
		for(i=0;i<r*c;i++)
		{
			if(n==no[i])
			{
				count++;
				break;
			}
		}
		if(count==0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
