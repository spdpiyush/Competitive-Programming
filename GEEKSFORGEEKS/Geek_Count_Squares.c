//GeeksForGeeks Problems : Count Squares
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,count,i,j;
	long long int no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&no);
		count=0;
		for(i=1,j=1;j<no;i++,j=i*i)
		{
			if(j<no)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
