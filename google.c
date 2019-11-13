//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值�
#include<stdio.h>
int main(void)
{
    int c=0,n,i,j;
    for(n=100000;n<1000000;n++)
    {
    	c=0;
    	for(i=1;i<=n;i++)
    	{
    	    j=i;
            while(j!=0)
            {
                if(j%10==1) 
                {
                    c++;
                }
                j=j/10;
            }
        }
        if(n==c)
        {
        	break;
        	printf("%d\n",n);
		}
    } 
    return 0;
}
