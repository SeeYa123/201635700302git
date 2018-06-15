#include<stdio.h>
void main()
{
 int N = 10;
 float height = 100.0;
 int i ;
 for( i = 0 ; i < N ; ++ i )
 {
 height = height / 2 ;
 }
 printf("十次后高度为%f",height);
}