//CODECHEF Problem :Chef and Two Strings
//Problem Code : CHEFSTLT
//Author : By PIYUSH.
#include<stdio.h>
#include<string.h>
void min(char [],char []);
void max(char [],char []);
int main()
{
	int t;
	char s1[105],s2[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",s1,s2);
		min(s1,s2);
		max(s1,s2);
	}
	return 0;
}
void min(char s1[],char s2[])
{
	int l,i,s=0;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?')
		{
			
			s++;
		}
	}
	printf("%d ",s);	
}
void max(char  s1[],char s2[])
{
	int l,i,k=0;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		
		if(s1[i]!=s2[i] || s1[i]=='?' || s2[i]=='?')  
		{
			k++;
		}
	}
	printf("%d\n",k);
}
