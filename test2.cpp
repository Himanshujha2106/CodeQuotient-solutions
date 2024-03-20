#include <iostream>
using namespace std;
int main()
{
    int size, tsum = 0, i = 0, j = 1, sum = 0, n = 0, b = 0,k=0;
    cin >> size;
    int arr[size + 1];

    for (i; i < size; i++)
    {
        cin >> arr[i];
    }
    arr[size + 1] = -69;

    for (int i = 0; i < size; i++)
    {
        if (tsum > sum)
        {
            sum = tsum;
        }
        tsum = 0;
        n = 0;

        for (int z = i; z <= n; z)
        {

            for (j = n; j <= k; j)
            {

                tsum = tsum + arr[j];
            }
            if (arr[n + 1] != -69)
            {

                n++;
                k+n;
            }
        }
    }

    cout << sum << endl;

    return 0;
}