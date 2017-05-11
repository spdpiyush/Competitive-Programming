//GeeksForGeeks Problem : Lower Case To UpperCase
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l;
	char str[55];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>=97 && str[i]<=122)
			{
				str[i]=str[i]-32;
			}
			
		}
		printf("%s",str);
		printf("\n");
	}
	return 0;
}
