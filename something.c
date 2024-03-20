
#include <stdio.h>
#include <math.h>
int main()
{
    int n, z = 0,j,i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for ( j = 2; j <= n; j++)
        for ( i = 2; i <= sqrt(i); i++)
        {
            if (i == sqrt(i))
            {
                printf("%d", z);

                z = z + i;
            }
        }
    printf("%d", z);

    return 0;
}
