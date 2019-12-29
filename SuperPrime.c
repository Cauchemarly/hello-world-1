//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int main(void)
{
	int n=0,i,j,m,t=1,a[1300]={0},b[1300]={0};
	for(i=100;i<10000;i++)
	{
		m=0; 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			a[n]=i;
			n++;
		}
	}
	t=0;
	for(i=0;i<n;i++)
	{
		int w=a[i]%10;
		int x=(a[i]/10)%10;
		int y=(a[i]/100)%10;
		int z=a[i]/1000;
		int c=w+x+y+z;
		int d=w*w+x*x+y*y+z*z;
		m=0;
		for(j=2;j<c;j++)
		{
			if(c%j==0)
			{
				m=1;
				break;
			}
		}
		for(j=2;j<d;j++)
		{
			if(d%j==0)
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			b[t]=a[i];
			t++;
		}
	}
	int sum=0;
	printf("superprime:\n");
	for(i=0;i<t;i++)
	{
		printf("%d ",b[i]);
		sum=sum+b[i];
	}
	printf("\n");
	int ave=sum/t;
	printf("average:%d",ave);
	return 0;
 } 
