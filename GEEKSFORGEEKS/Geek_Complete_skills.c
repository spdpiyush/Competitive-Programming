//GeeksForGeeks Problem :Compete the skills(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,i,count_a,count_b;
	long long int a[3],b[3];
	scanf("%d",&t);
	while(t--)
	{
		count_a=0;
		count_b=0;
		for(i=0;i<3;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<3;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<3;i++)
		{
			if(a[i]>b[i])
			count_a++;
			else if(a[i]<b[i])
			count_b++;
			else
			{
				count_a+=0;
				count_b+=0;
			}
		}
		printf("%d %d\n",count_a,count_b);
	}
	return 0;
}
