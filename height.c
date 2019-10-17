#include "stdio.h"
int main()
{
	double foot,inch;
	printf("%f\n",(10/3.0*3));
	printf("请输入身高的英尺和英寸，如输入5 7，代表5英尺7英寸\n");
	// scanf("%lf %lf",&foot,&inch);
	printf("您的身高是%f米\n",((foot+ inch/12)*0.30048) );
	return 0;
}