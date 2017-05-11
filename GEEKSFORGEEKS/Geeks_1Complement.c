//GeeksForGeeks Problem : 1's Complement
//Author : By PIYUSH.
#include<stdio.h>
int comp(int);
int main()
{
	int t,n,no[100],i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",comp(no[i]));
		}
		printf("\n");
	}
	return 0;
}
int comp(int no)
{
	if(no==0)
	return 1;
	else
	return 0; 
}
