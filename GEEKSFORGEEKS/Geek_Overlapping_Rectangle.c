//GeeksForGeeks Problem : Overlapping rectangles(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,x1,y1,x2,y2,x3,y3,x4,y4,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
		if((x3>x2) || (y3>y2) ||(x1>x4) || (y1>y4))
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
