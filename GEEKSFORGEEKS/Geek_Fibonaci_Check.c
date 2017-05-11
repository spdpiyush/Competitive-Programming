//GeeksForGeeks Problem : Check if The Number is Fibonaci (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,a[100],i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		a[0]=0;
		a[1]=1;
		for(i=2;i<100;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		count=0;
		for(i=0;i<100;i++)
		{
			if(a[i]==no)
			{
				count++;
				break;
			}
		}
		if(count==0)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}
