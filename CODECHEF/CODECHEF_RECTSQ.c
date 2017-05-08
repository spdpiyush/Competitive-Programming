//CodeChef Problem : Farmer And His Plot(Beginner)
//Problem Code : RECTSQ
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,l,b,i,min,k,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&l,&b);
		min=(l<b)?l:b;
		for(i=1;i<=min;i++)
		{
			if(l%i==0 && b%i==0)
			k=i;
		}
		ans=(l/k)*(b/k);
		printf("%d\n",ans);
	}
	return 0;
}
