#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int val1; int val2;
    scanf("%d%d",&val1,&val2);
    if(val1<val2){printf("Performed well");}
    else if(val1>val2){printf("Did not perform well");}
    else{printf("Did not participate");}
    return 0;
}
