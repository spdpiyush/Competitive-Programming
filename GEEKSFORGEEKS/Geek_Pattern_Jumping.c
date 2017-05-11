//GeeksForGeeks Problem : Pattern Jumping. (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,i,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		for(i=1;i<=n;i=i+i)
		{
			if(i==n)
			{
				count++;
				break;
			}
		}
		if(count==0)
		printf("False\n");
		else
		printf("True\n");
	}
	return 0;
}
