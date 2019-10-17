#include "stdio.h"
int main()
{
	// 计算时间差
	int hour1,minute1;
	int hour2, minute2;
	printf("请输入第一个时间：\n");
	scanf("%d %d", &hour1, &minute1);
	printf("请输入第二个时间：\n");
	scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;
	printf("两个时间相差：%d小时%d分钟\n", t/60,t%60 );
	return 0;
}