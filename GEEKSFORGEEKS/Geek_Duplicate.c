//GeeksForGeeks Problem : Find duplicates under given constraints(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,a[10],i,count,j;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
		count=0;
		for(i=0;i<6;i++)
		{
			count=0;
			for(j=i;j<10;j++)
			{
				if(a[i]==a[j])
				count++;
				else
				break;
			}
			if(count==5)
			break;
		}
		printf("%d\n",a[i]);
	}
}
