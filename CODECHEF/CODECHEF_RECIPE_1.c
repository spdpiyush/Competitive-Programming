//CODECHEF Problem : Cutting Recipes (Beginner)
//Problem Code : RECIPE
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no[50],n,i,l,lcm;
	scanf("%d",&t);
	while(t--)
	{
		l=2000;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			if(no[i]<l)
			l=no[i];
		}
		lcm=0;
		while(l>0)
		{
		for(i=0;i<n;i++)
		{
			if((no[i]%l)!=0)
			{
				l--;
			}
			lcm=l;
		}
		   if(l>0)
			break;
	    }
		for(i=0;i<n;i++)
		{
		 printf("%d ",(no[i])/lcm);
		}
		printf("\n");
	}
	return 0;
}
