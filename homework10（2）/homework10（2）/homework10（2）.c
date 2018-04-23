#include<stdio.h>
int main()
{
	int a,b;
	int c=a/10000;
	printf("请输入当月利润：");
	scanf("%d",&a);
	if(c>10)
		c=10;
	switch(c)
	{
	    case 0:
			b=a*0.1;
			break;
		case 1:
			100000*0.1+(a-100000)*0.075;
			break;
		case 2:
			break;
		case 3:
			200000*0.1+(a-200000)*0.05;
			break;
		case 4:
			break;
		case 5:
			400000*0.1+(a-400000)*0.03;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			600000*0.1+(a-600000)*0.015;
			break;
		case 10:
			1000000*0.1+(a-1000000)*0.01;
			break;
		default:
			break;
	}
			printf("应发奖金总数是：%d\n,b");
			return 0;
}
