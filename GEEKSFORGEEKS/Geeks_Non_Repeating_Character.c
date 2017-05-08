//GeeksForGeeks Problem : Non Repeating Character (Easy)
//Auhtor : Piyush
#include<stdio.h>
int main()
{
	int t,n,count,i,no[200];
	char str[101];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",str);
		for(i=97;i<=122;i++)
		{
			no[i]=0;
		}
		for(i=0;i<n;i++)
		{
			++no[str[i]];
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(no[str[i]] == 1)
			{
				printf("%c\n",str[i]);
				count=0;
				break;
			}
			else
			count=-1;
		}
		if(count == -1)
		printf("-1\n");
	}
	return 0;
}
