//GeeksForGeeks Problem : Number of Paths (Basic)
//Auhtor : PIYUSH
#include<stdio.h>
int move(int,int);
int main()
{
	int t,m,n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		ans=move(m,n);
		printf("%d\n",ans);
	}
	return 0;
}
int move(int m,int n)
{
	if(m==1 || n==1)
	return 1;
	else
	return move(m-1,n)+move(m,n-1);
}
