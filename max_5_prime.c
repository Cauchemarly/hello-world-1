//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include <stdio.h>
#include <math.h>
int save[120]={},num=0;
void swap(int *a, int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
}

void judge(int n)
{
    int temp;
    for (temp=2;temp<=n;temp++)
	{
        if (n%temp==0)
		{
            break;
        }
    }
    if (temp == n)
	{
        save[num]=temp;
        num++;
    }
}
void perm(int l[], int k, int m)
{
    int i;
    int n=0;
    if(k==m)
    {
        for(i=0;i<=m;i++)
        {
        	n+=l[i]*pow(10,m-i);
		}
        judge(n);
    }
    else
    {
        for(i=k;i<=m;i++)
        {
            swap(&l[k],&l[i]);
            perm(l, k+1, m);
            swap(&l[k], &l[i]);
        }
    }
}

void select(int x[120])
{
    int m,i,temp;
    for (m=num;m>0;m--) 
	{
        for (i=0;i<m;i++)
		{
            if (x[i] > x[i+1]) 
			{
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
            }
        }
    }
    if (num!=0)
    {
    	printf("%d",x[num]);
	}
    else
    {
    	printf("ERROR");
	}
}
int main(void)
{
    int l[5],t;
    for (t=0;t<5;t++)
	{
        scanf("%d",&l[t]);
    }
    perm(l,0,4);
    select(save);
    return 0;
}
