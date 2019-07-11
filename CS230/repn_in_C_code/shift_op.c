#include <stdio.h>
int main()
{
    int num=212,i;

    for (i=0;i<=2;++i)
        printf("Right shift by %d: %d\n",i,num>>i);
    
    printf("\n");

    for (i=0;i<=2;++i) 
    	printf("Left shift by %d: %d\n",i,num<<i);    
        return 0;
}

// Observe what happens when a number is left and right shifted. 
// Try a number that is not even, what difference do you observe?