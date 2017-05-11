//GeeksForGeeks Problem : Smaller and Larger (School)
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,n,x,no[105],i,count,lar;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&x);
		count=0;
		lar=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			if(no[i]<=x)
			count++;
			if(no[i]>=x)
			lar++;
		}
		printf("%d %d",count,lar);
		printf("\n");
	}
	return 0;
}
