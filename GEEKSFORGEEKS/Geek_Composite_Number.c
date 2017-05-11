//GeeksForGeeks Problem : Composite Series (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			count=0;
			if(i==1)
			continue;
			else
			{
				for(j=2;j<=i;j++)
				if(i%j==0)
				count++;
			}
			if(count>1)
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
