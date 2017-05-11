//GeeksForGeeks Problem : Stuffs Division (Basic)
//Author : PIYUSH
#include<stdio.h>
int check(int);
int main()
{
	int t,n,sum,i,no;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			sum = sum + no;
		}
		if(sum == check(n))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
int check(int no)
{
	int sum;
	sum = no*(no+1);
	sum/=2;
	return sum;
}
