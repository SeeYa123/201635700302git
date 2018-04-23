#include<stdio.h>
int main()
{
	int i,x,y,z,j;
	printf("请输入4个整数：");
	scanf("%d""%d""%d""%d",&x,&y,&z,&j);
	if(x>y)
	{
		i=x,x=y,y=i;
	}
	if(x>z)
	{
		i=x,x=z,z=i;
	}
	if(x>j)
	{
		i=x,x=j,j=i;
	}
	if(y>z)
	{
		i=y,y=z,z=i;
	}
	if(y>j)
	{
		i=y,y=j,j=i;
	}
	if(z>j)
	{
		i=z,z=j,j=i;
	}
	printf("由小到大输出：%d %d %d %d\n",x,y,z,j);
	return 0;
}
