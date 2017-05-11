//GeeksForGeeks Problem : Square Or Not (School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
long long int dis(int,int,int,int);
int main()
{
	int t,ax,ay,bx,by,cx,cy,dx,dy;
	long long int d1,d2,d3,d4;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&ax,&ay);
	scanf("%d%d",&bx,&by);
	scanf("%d%d",&cx,&cy);
	scanf("%d%d",&dx,&dy);
	d1=dis(ax,ay,bx,by);
	d2=dis(bx,by,cx,cy);
	d3=dis(cx,cy,dx,dy);
	d4=dis(dx,dy,ax,ay);
	if(d1==d2 && d2==d3 && d3==d4 && d4==d1)
	printf("1\n");
	else
	printf("0\n");
	}
	return 0;
	
}
long long int dis(int x1,int y1,int x2,int y2)
{
	long long int d,x,y;
	x=((x2-x1)*(x2-x1));
	y=(y2-y1)*(y2-y1);
	d=sqrt(x+y);
	return d;
}
