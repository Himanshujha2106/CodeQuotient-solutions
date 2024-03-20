#include <time.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
   clock_t tStart = clock();



   int n, z = 1;
   printf("Enter the number\n");
   scanf("%d", &n);
   for (int i = 2; i <= sqrt(n); i++)
   {
      if (n % i == 0)
      {

         z = 0;
         break;
      }
   }
   if (z == 0)
      printf("Not a Prime number\n");
   else
      printf("prime number\n");

   printf("Time taken:%.3f ", (double)(clock() - tStart) / CLOCKS_PER_SEC);
   return 0;
}