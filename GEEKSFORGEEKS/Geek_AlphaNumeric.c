//GeeksForGeeks Problem : Remove Characters From AlphNumeric String.
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	char str[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
			continue;
			else
			putchar(str[i]);
		}
		printf("\n");
	}
	return 0;
	
}
