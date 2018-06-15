#include <stdio.h>    
int main()  
{  
    int i,j,k; 
    for(i='x';i<='z';i++)  
        for(j='x';j<='z';j++)  
            if(j!=i)  
                for(k='x';k<'z';k++)  
                    if(k!=i&&k!=j)  
                        if(i!='x'&&k!='x'&&k!='z')  
                            printf("a-%c b-%c c-%c",i,j,k);  
    return 0;  
}  