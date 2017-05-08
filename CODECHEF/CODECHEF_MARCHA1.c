//CodeChef Problem : Paying up (Beginner)
//Problem Code : MARCHA1
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[20],i,j,val,temp,s,pr,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&val);
		s=1;
		pr=val;
		for(i=0;i<n;i++)
		{
		  scanf("%d",&no[i]);
		  if(no[i]>=s && no[i]<=val)
		  s=no[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		sum=0;
		while(n && val)
		{
			sum+=(val%10);
		    val=val%s;
		    for(i=0;no[i]<=val;i++)	
		    {
		   	 if(no[i]<=val)
		   	 {
		   		s=val;
		   	 }
		    }
		   n--;
		}
		if(sum == pr)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
