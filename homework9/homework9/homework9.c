#include<stdio.h>
int main(void)
{
    int num;
    printf("请输入一个不大于5位的正整数\n");
    while(scanf("%d",&num))
	{
    	
    if(num<=0||num>9999)
    {
    	printf("错误，请重新输入\n");
    }
    if(num>=1&&num<=9)
    {
    	printf("输入的数为1位数\n%d\n",num);
    }
     if(num>=10&&num<=99)
    {
       printf("输入的数为2位数\n%d%d\n",num%10,num/10);	
    }
     if(num>=100&&num<=999)
    {
    	printf("输入的数为3位数\n%d%d%d\n",num%10,num%100/10,num/100);	
    }
     if(num>=1000&&num<=9999)
    {
    printf("输入的数为4位数\n%d%d%d%d\n",num%10,num%100/10,num%1000/100,num/1000);	
    }
    
    }
}