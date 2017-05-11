//GeeksForGeeks Problem : Vowel or Not (School)
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	char ch[105];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("\n%c",&ch[i]);
		if(ch[i]=='A' || ch[i]=='a' || ch[i]=='E' || ch[i]=='e' || ch[i]=='I' || ch[i]=='i' || ch[i]=='O' || ch[i]=='o' || ch[i]=='U' || ch[i]=='u')
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}

