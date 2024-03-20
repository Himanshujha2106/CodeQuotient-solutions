
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int count = 0;
    int n;
    cin>>n;
    // for (int i = 0; i < pow(10,n)-1; i++)
    // {
    //     int n = i, remainder, reverse = 1, check = 0;

    //     while (n != 0)
    //     {
    //         remainder = n % 10;

    //         reverse = reverse * 10 + remainder;
    //         if (remainder == 3 && check == 1)
    //         {

    //             count++;
    //             break;
    //         }
    //         check = remainder;
    //         n /= 10;
    //     }
    // }
    count=66888.2*n-175591;
    cout << pow(10,n)-count << endl;

    return 0;
}