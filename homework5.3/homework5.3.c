#include<stdio.h>
int main()  
{  
int m, n;  
int m_cup, n_cup, res; 
printf("Enter two integer:\n");  
scanf("%d %d", &m, &n);  
if (m > 0 && n >0)  
{  
m_cup = m;  
n_cup = n;  
res = m_cup % n_cup;  
while (res != 0)  
{  
m_cup = n_cup;  
n_cup = res;  
res = m_cup % n_cup;  
}  
printf("Greatest common divisor: %d\n", n_cup);  
printf("Lease common multiple : %d\n", m * n / n_cup);  
}  
else printf("Error!\n");  
return 0;  
}  