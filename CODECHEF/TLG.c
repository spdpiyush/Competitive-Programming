/* CODECHEF PROBLEM (TLG) i.e Billiards Problem to Determine The Winner
according to no of Test Cases , then Enetring the Points of Both Player
and player with leading Point in any match Will Win The game. */

// CODE Goes here : By PIYUSH KUMAR.

#include<stdio.h>
int main()
{
	int t,a[100],b[100],i,max=0,w;
	int c[100];
	scanf("%d",&t);
	a[t],b[t],c[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<t;i++)
	{
		c[i]=a[i]-b[i];
		if(c[i]<0)
		{
			c[i]=(-1)*c[i];
		}
	}
	for(i=0;i<t;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			if(a[i]>b[i])
			{
				w=1;
			}
			else
			{
				w=2;
			}
		}
	}
	printf("%d ",w);
	printf("%d",max);
	return 0;
}
