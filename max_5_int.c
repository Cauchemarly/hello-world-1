//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include <stdio.h>
int main(void)
{
	int x[5],i,j;
	scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(x[j]<x[j+1])
			{
				int temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	
	printf("%d %d %d %d %d",x[0],x[1],x[2],x[3],x[4]);
	return 0;
	
} 
