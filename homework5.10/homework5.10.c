#include <stdio.h>  
int main()  
{  
    float i=1;  
    float j=2;  
    float sum=0;  
    int k;  
    for(k=1;k<=20;k++)  
    {  
        int x;  
        sum=sum+j/i;  
        x=i;  
        i=j;  
        j=x+j;  
    }  
    printf("���Ϊ%f\n",sum);  
    return 0;  
}  