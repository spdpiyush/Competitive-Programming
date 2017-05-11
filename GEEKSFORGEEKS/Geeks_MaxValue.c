#include<stdio.h>
int main()
{
	int t,n,no,l=1,s=1000,li,si,i,ans;
	scanf("%d",&t);
	while(t--)
	{
		l=1;
		s=1000;
		i=0;
		scanf("%d",&no);
		while(no--)
		{
			
			scanf("%d",&n);
			if(n>l)
			{
				l=n;
				li=i;
			}
			if(n<s)
			{
				s=n;
				si=i;
			}
			i++;
		}
		ans=abs((l-li))-abs((s-si));
		printf("%d\n",ans);
		
	}
}
