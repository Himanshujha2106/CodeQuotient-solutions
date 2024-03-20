// #include <iostream>
// #include <Climits>
// using namespace std;

// int main()
// {
//     int z = 6, sum[5], com, del = 0, n = 6, size;

//     int arr[z] = {1,1,1,1,1,9};
//     size = z - n;

//     for (int i = 0; i < size; i++)
//     {

//         com = INT_MAX;

//         for (int j = del; j < n + 1; j++)
//         {

//             if (arr[j] < com)
//             {
//                 sum[i] = arr[j];

//                 com = arr[j];

//                 del = j + 1;
//             }
//         }
//         if ((n + 1) <= z)
//             n += 1;
//     }

//     for (int i = 0; i < size; i++)
//         cout << " \n"
//              << sum[i];
//     return 0;
// }

// #include <iostream>
// #include <Climits>
// using namespace std;

// int main()
// {
//     int left = 0, right = 0, size = 9, j;

//     int arr[size] = {1, 2, 3, 9,7,9, 3, 2, 1};

//     for (int i = 0; i < size; i++)
//     {
//         j = 0;
//         left = left + arr[i];
//         while ((i + j) < size)
//         {
//             right += arr[i + j];
//             j++;
//         }
//         if (left == right)
//         {
//             cout << "location : " << i<<endl;
//             cout << "sum : " << left-arr[i];
//             break;
//         }

//         right = 0;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int t = 1, n = 4, s = 4, i, j, maxx;
    // cin>>t;
    while (t--)
    {

        // cin>>n>>s;
       
        
            i = s - n, j = n, maxx = 0;
            if(i<0)
            i=-1*i;
            while (i <= n && j <= n)
            {
                cout<<i<<", "<<j<<endl;
                maxx = (maxx, i - j);
                i++;
                j--;
            }
        
        cout << maxx << endl;
    }

    return 0;
}
