//GeeksForGeeks Problem : Remove Spaces(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t,i,l;
	char str[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]!=' ')
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}
