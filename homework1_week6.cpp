#include <stdio.h>
int main(void)
{
	int u,v,w,x;
	printf("number1= ");
	scanf("%d",&u);
	printf("number2= ");
	scanf("%d",&v);
	w=u;
	x=v;
	while(v!=0) 
	{
		int t=u%v;
		u=v;
		v=t;
	}
	int y;
	y=w*x/u;
	printf ("the least common multiple is %d",y);
}
 
