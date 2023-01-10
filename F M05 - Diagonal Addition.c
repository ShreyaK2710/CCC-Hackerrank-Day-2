#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdlib.h>
int main()
{    
    int n;
    scanf("%d",&n);    
    int mat[n][n],i,j,sum = 0;    
    for(i=0; i<n; i++)        
        for(j=0; j<n; j++)            
            scanf("%d",&mat[i][j]);    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)            
            if(i==j || (i+j)==(n-1))                
                sum += mat[i][j];    
    printf("%d",sum);    
    return 0;
    }
