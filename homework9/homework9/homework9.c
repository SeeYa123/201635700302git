#include<stdio.h>
int main(void)
{
    int num;
    printf("������һ��������5λ��������\n");
    while(scanf("%d",&num))
	{
    	
    if(num<=0||num>9999)
    {
    	printf("��������������\n");
    }
    if(num>=1&&num<=9)
    {
    	printf("�������Ϊ1λ��\n%d\n",num);
    }
     if(num>=10&&num<=99)
    {
       printf("�������Ϊ2λ��\n%d%d\n",num%10,num/10);	
    }
     if(num>=100&&num<=999)
    {
    	printf("�������Ϊ3λ��\n%d%d%d\n",num%10,num%100/10,num/100);	
    }
     if(num>=1000&&num<=9999)
    {
    printf("�������Ϊ4λ��\n%d%d%d%d\n",num%10,num%100/10,num%1000/100,num/1000);	
    }
    
    }
}