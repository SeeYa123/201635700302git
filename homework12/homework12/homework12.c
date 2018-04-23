#include<stdio.h>
int main()
{
	int h=10;
	float X1=2,Y1=2,X2=-2,Y2=2,X3=-2,Y3=-2,X4=2,Y4=-2,X,Y,D1,D2,D3,D4;
	printf("请输入一个交叉点（X,Y）:");
	scanf("%f,%f",&X,&Y);
	D1=(X-X1)*(X-X1)+(Y-Y1)*(Y-Y1);
	D2=(X-X2)*(X-X2)+(Y-Y2)*(Y-Y2);
	D3=(X-X3)*(X-X3)+(Y-Y3)*(Y-Y3);
	D4=(X-X4)*(X-X4)+(Y-Y4)*(Y-Y4);
	if(D1>1 && D2>1 && D3>1 && D4>1)
	{
		h=0;
	}
	printf("该点的高度为：%d\n",h);
	return 0;
}