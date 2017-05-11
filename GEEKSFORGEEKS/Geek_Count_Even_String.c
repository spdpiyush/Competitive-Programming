//GeeksForGeeks Problem : Count Even SUbstring (Basic)
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,sum;
	char str[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		sum=0;
		for(i=0;i<l;i++)
		{
			if(str[i]%2==0)
			sum=sum+(i+1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
