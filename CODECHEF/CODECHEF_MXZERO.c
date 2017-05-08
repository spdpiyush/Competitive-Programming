//CodeChef Problem : Make XOR Zero (Beginner)
//Problem Code : MXZERO
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no,i,count_o,count_z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count_o=0;
		count_z=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			if(no == 1)
			count_o++;
			else
			count_z++;
		}
		if((count_o%2!=0) && (count_z%2==0))
		printf("%d\n",count_o);
		else if((count_o%2==0) && (count_z%2!=0))
		printf("%d\n",count_z);
		else if((count_o%2==0) && (count_z%2==0))
		printf("%d\n",count_z);
		else
		printf("%d\n",count_o);
	}
	return 0;
}
