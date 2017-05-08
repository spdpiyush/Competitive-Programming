//CodeChef Problem : Holmes and Academy Admission(LOCAPR17)
//Problem Code : LOC171
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,h,i,l=1,count,temp;
	scanf("%d",&t);
	while(t--)
	{
		l=1;
		count=0;
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)	
	  {
	  	scanf("%d",&h);
	  	if(h==l)
	  	{
	  		count+=2;
	  	}
	  	if(h>l)
	  	{
	  		l=h;
	  		count++;
	  	}
	  }
	  printf("%d\n",count);
	}
	return 0;
}
