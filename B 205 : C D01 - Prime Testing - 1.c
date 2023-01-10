#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char *isPrime(int n)
{
    if(n==1)return "no";
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
        return "no";
    return "yes";
    }
int main(){
    int n;
    scanf("%d",&n);
    printf("%s",isPrime(n));
    return 0;
}
