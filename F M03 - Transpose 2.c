#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{    
    int n,m;    
    scanf("%d %d",&n,&m);    
    int mat[n][m],i,j;    
    for(i=0; i<n; i++)        
        for(j=0; j<m; j++)            
            scanf("%d",&mat[i][j]);    
    for(j=0; j<m; j++)    
    {        
        for(i=0; i<n; i++)            
            printf("%d ",mat[i][j]);        
        printf("\n");   
    }    
    return 0;
}
