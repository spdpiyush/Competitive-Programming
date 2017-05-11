//GeeksForGeeks Problem : Binary Array Sorting (school)
//Author : By PIYUSH 
#include<stdio.h>
int main()
{
	int t,n,no,i,count_z,count_o;
	scanf("%d",&t);
	while(t--)
	{
		count_z=0;
		count_o=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			if(no==0)
			count_z++;
			else
			count_o++;
		}
		while(count_z)
		{
			printf("0 ");
			count_z--;
		}
		while(count_o)
		{
			printf("1 ");
			count_o--;
		}
		printf("\n");
	}
	return 0;
}
