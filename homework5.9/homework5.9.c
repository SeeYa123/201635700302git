#include<stdio.h>

int main()
{
    int n,i,count,sum;
    int a[500];
    
    /*�����Ե�ÿһ����*/
    for(n=2;n<=1000;n++){
        count=0;
        sum=0;
        
        /*�����Ƿ�Ϊ����*/    
        for(i=1;i<n;i++){
      
          /*fmod n/i ������0*/ 
            if(!(n%i)){
                   a[count++]=i;
                   sum=sum+i;
              }
        }
       
        if(n==sum){
            printf("%d its factors are ",n);
              
              for(i=0; i<count; i++)
                  printf("%d ",a[i]);
              printf("\n");
        }
    }
    
    return 0;
}