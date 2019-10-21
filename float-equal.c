//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include<stdio.h>
int main(void)
{
    float m,x,y;
    printf("number1= "); 
    scanf("%f",&m); 
    printf("number2= ");
    scanf("%f",&x);
    y=m-x;
    if(y<0)
    {y=-y;
	}
	
    if(y<0.00001)
    {
	printf("number1=number2");
	}
	else
	{
		printf("number1��number2");
	}

}
