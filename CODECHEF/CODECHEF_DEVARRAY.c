//CodeChef Problem : Devu and an Array (Beginner)
//Problem Code : DEVARRAY
//Author:Piyush
#include<stdio.h>
int main()
{
	int n,q,no[100000],i,j,s,l,qe;
	scanf("%d%d",&n,&q);
	scanf("%d",&no[0]);
	s=no[0];
	l=no[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&no[i]);
		if(no[i]<s)
		s=no[i];
		if(no[i]>l)
		l=no[i];
	}
	while(q--)
	{
		scanf("%d",&qe);
		if(qe>=s && qe<=l)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
