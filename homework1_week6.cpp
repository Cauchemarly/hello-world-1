#include <stdio.h>
int main(void)
{
	int u,v,w,x;
	printf("number1= ",&u);
	scanf("%d",&u);
	printf("number2= ",&v);
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
	printf ("��С������Ϊ%d",y);
}
 
