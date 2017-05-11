//GeeksForGeeks Problem : ALone in Couple(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,a[505],i,count,n,j,temp;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d",&n);
	  for(i=0;i<n;i++)	
	  {
	  	scanf("%d",&a[i]);
	  }
	  for(i=0;i<n-1;i++)
	  {
	  	for(j=i;j<n;j++)
	  	{
	  		if(a[i]>a[j])
	  		{
	  			temp=a[i];
	  			a[i]=a[j];
	  			a[j]=temp;
	  		}
	  	}
	  }
	  for(i=0;i<n-1;i=i+2)
	  {
	  	if(a[i]!=a[i+1])
	  	break;
	  }
	  printf("%d\n",a[i]);
	}
	return 0;
}
