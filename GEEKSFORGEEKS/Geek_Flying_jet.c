//GeeksforGeeks Problem : Flying Jet(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<math.h>
void even(int);
unsigned long long int sum;
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2!=0)
		{
			n=n/2;
			n+=1;
			sum=pow(n,4);
			printf("%lld\n",sum);
		}
		else
		{
			n=n/2;
			even(n);
		}
		
	}
	return 0;
}

void even(int n)
{
	int i;
	sum=7;
	for(i=2;i<=n;i++)
	{
		sum = sum * 3;
    }
	printf("%lld\n",sum);
}
