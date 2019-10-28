//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
#include<stdio.h>
int main(void)
{
	int x,y,z,m,n;
	printf("the number of people in travel agency: ");
	scanf("%d",&x);
	printf("can speak English: ");
	scanf("%d",&y);
	printf("can speak Russian: ");
	scanf("%d",&z);
	printf("can't speak English or Russian: ");
	scanf("%d",&m);
	n=y+z+m-x;
	if(n>=0)
	{
		printf("can speak English and Russian:%d",n);
	}
	else
	{
		printf("Input data error, can not be calculated.");
	}
	return 0;
 } 
