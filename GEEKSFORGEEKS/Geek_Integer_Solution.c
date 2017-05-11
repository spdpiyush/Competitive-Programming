//GeeksForGeeks Problem : Number Of Integer Solutions(School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i,j,k,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		count=0;
		i=0;
		while(i<=no)
		{
			j=0;
			while(j<=no)
			{
				for(k=0;k<=no;k++)
				{
					if(i+j+k==no)
					count++;
				}
				j++;
			}
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}

