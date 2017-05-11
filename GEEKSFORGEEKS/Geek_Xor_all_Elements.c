//GeeksForGeeks Problem : Xor of all Elements (Basic)
//Author : PIYUSH
#include<stdio.h>
int xo(int [],int);
int j;
int main()
{
	int t,n,a[102],b[102],i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			j=i;
			b[i]=xo(a,n);
			printf("%d ",b[i]);
		}
		printf("\n");
	}
	return 0;
}
int xo(int ar[],int n)
{
	int i,re=0;
	for(i=0;i<n;i++)
	{
		if(i!=j)
		re=re^ar[i];
	}
	return re;
}
