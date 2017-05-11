//GeeksForGeeks Problem : Permutations of a Given String(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
void swap(char *,char *);
void perm(char *,int,int);
int main()
{
	int t,i,l;
	char str[10];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		perm(str,0,l-1);
		printf("\n");
	}
	return 0;
}
void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void perm(char *a,int b,int l)
{
	int i;
	if(b==l)
	printf("%s ",a);
	else
	{
		for(i=b;i<=l;i++)
		{
			swap((a+b),(a+i));
			perm(a,b+1,l);
			swap((a+b),(a+i));
		}
	}
}
