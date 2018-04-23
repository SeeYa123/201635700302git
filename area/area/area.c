#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	float r,area;
	printf("ÇëÊäÈëÔ²µÄ°ë¾¶£º");
		scanf("%f",&r);
	area=PI*r*r;
	printf("PI=%.7f r=%.0f\n area=%f\n",PI,r,area);
	return 0;
};