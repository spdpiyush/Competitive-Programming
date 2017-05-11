//GeeksForGeeks Problem : Number is sparse or Not (Basic)
//Author :PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[7],i,count;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<7;i++)
		{
			no[i]=0;
		}
		scanf("%d",&n);
		i=0;
		while(n)
		{
			no[i]=n%2;
			n=n/2;
			i++;
		}
		count=0;
		for(i=0;i<6;i++)
		{
			if((no[i]==1) && no[i+1]==1)
			{
				count++;
				break;
			}
		}
		if(count!=0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
