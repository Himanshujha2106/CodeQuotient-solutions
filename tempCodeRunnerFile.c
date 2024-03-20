#include <time.h>
#include<stdio.h>
    int main(void) 
    {
       clock_t tStart = clock();
       /* Do your stuff here */
       printf("Time taken: %.3fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
       return 0;
    }