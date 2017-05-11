//GeeksForGeeks Problem : Minimum Element in a Sorted and Rotated Array (Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no,s,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&s);
		for(i=1;i<n;i++)
		{
			scanf("%d",&no);
			if(no<s)
			s=no;
		}
		printf("%d\n",s);
	}
	return 0;
}
