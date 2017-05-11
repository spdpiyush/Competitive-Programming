//GeeksForGeeks Problem : Number Containing 0s and 1s (Basic)
//Author : PIYUSH
#include<stdio.h>
int check(int);
int sum=0;
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&no);
		printf("%d\n",check(no));
	}
	return 0;
}
int check(int no)
{
	int s=no;
	if(no<10)
	return sum;
	else
	{
		while(s)
		{
			if(s%10 == 0)
			/*{
				sum++;
				break;
			}*/
			return 1 + check(no-1);
			else
			s=s/10;
		}
		return check(no-1);
	}
}

