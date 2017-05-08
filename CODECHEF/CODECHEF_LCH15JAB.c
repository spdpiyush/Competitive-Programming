//CODECHEF Problem : Piece Of Cake (Beginner)
//Problem Code : LCH15JAB
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,f[200],j;
	char s1[55];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s1);
		for(i=0;i<200;i++)
		{
			f[i]=0;
		}
		for(i=0;i<strlen(s1);i++)
		{
			f[s1[i]]++;
		}
		for(j=0;j<200;j++)
		{
			if(2*f[j]==strlen(s1))
			{
			printf("YES\n");
			break;
			}
			
		}
		if(j==200)
		{
			printf("NO\n");
		}
	}
	return 0;
}
