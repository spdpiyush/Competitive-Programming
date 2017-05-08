//CODECHEF Problem : Cutting Recipes.(Beginner)
//Problem  Code : RECIPE
//Author :By PIYUSH.
#include<stdio.h>
int hcf(int,int);
int main()
{
	int t,no[50],n,i,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		h=no[0];
		for(i=1;i<n;i++)
		{
			h=hcf(h,no[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",no[i]/h);
		}
		printf("\n");
    }
    return 0;
}
int hcf(int a,int b)
{
	if(b==0)
	return a;
	return hcf(b,a%b);
}
