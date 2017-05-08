//CodeChef Problem : Akhil and Colored Ball(Beginner)
//Problem Code : ACBBALL
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	char str[100002],str1[100002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		scanf("%s",str1);
		i=0;
		while(str[i])
		{
			if(str[i]=='W' && str1[i]=='W')
			printf("B");
			else if(str[i]=='B' && str1[i]=='B')
			printf("W");
			else
			printf("B");
			i++;
		}
		printf("\n");
	}
	return 0;
}
