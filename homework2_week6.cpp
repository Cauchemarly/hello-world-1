#include <stdio.h>
int main(void)
{
	int u,v,x;
	printf("number1= ");
	scanf("%d",&u);
	printf("number2= ");
	scanf("%d",&v);
	while(v!=0)
	{
		x=u%v;
		u=v;
		v=x;
	}
	if(u==1)
	{
	printf("����\n");
	}
	else
	{	
	printf("������\n");
	}
	return 0;
}
