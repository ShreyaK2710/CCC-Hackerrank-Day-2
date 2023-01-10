#include<stdio.h>
int main()
{
	int i, N; 
	scanf("%d", &N); //acquiring the value of N, the size of array
	int arr[N];
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=N-1;i>=0;i--)
        printf("%d ",arr[i]);
        //declaring an array of size N.
	//input the elements of the array here and then print them in reverse
	

	return 0;
}
