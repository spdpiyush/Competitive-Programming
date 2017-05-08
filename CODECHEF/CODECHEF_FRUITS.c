//CODECHEF Problem : Chef and Fruits (Beginner)
//Problem Code : FRUITS
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,n,m,k,ans,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&k);
		if(n<m)
		{
			a=m-n;
			while(k && a)
			{
				n++;
				k--;
				a--;
			}
		}
		if(n>m)
		{
			a=n-m;
			while(k && a)
			{
				m++;
				k--;
				a--;
			}
		}
		ans=n-m;
		if(ans<0)
		ans=ans*-1;
		printf("%d\n",ans);
	}
	return 0;
}

