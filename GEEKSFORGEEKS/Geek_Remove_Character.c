//GeeksForGeeks Problem : Remove Character (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,count;
	char str1[55],str2[55];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		for(i=0;i<strlen(str1);i++)
		{
			count=0;
			for(j=0;j<strlen(str2);j++)
			{
				if(str1[i]==str2[j])
				{
					count++;
				}	
			}
			if(count == 0)
			printf("%c",str1[i]);
		}
		printf("\n");
	}
	return 0;
}
