//GeeksForGeeks Problem :  Majority ELement(Easy)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],i,j,count,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		s=0;
		for(i=0;i<n-1;i++)
		{
			count=0;
			for(j=i;j<n;j++)
			{
				if(no[i]==no[j])
				count++;
			}
			if(count>n/2)
			{
				printf("%d\n",no[i]);
				break;
			}
			else
			s++;
			
		}
		if(s==n-1)
		printf("NO Majority Element\n");
	}
	return 0;
}
