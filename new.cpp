

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6, maxx = 0;
//     int arr[] = {1, 2, 37, 4, 5, 6};
//     while (n--)
//     {
//         if (arr[n] > maxx)
//             maxx = arr[n];
//     }

//     cout << maxx << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {1, 2, 37, 4, 5, 6};
//    int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6, maxx = 0;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     while (n--)
//     {

//         maxx += arr[n];
//     }

//     cout << maxx << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int largest(int arr[], int size, int maxx)
// {

//     if (size == 0)
//     {
//         return maxx;
//     }
//     if (arr[size] > maxx)
//         maxx = arr[size];

//     largest(arr, size - 1, maxx);
// }
// int main()
// {
//     int n = 6, maxx = 0;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     cout << largest(arr, n, 0);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int size = 6;
//     int z = size - 1;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int temp[size];

//     for (int i = 0; i < size; i++)
//     {

//         temp[i] = arr[z - i];
//         cout << temp[i]<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int size = 6;
//     // int max=INT16_MAX,min=INT16_MIN;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     sort(arr, arr+size);

//    cout<<arr[1]<<endl;
//    cout<<arr[size-2];
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int summ(int arr[], int size, int sum)
// {

//     if (size <0)
//     {
//         return sum;
//     }

//        sum += arr[size];

//     summ(arr, size - 1, sum);
// }
// int main()
// {
//     int n = 6, maxx = 0;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     cout << summ(arr, n, 0);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int maxx(int arr[], int n)
// {
//     int max = 0;
//     while (n--)
//     {
//         if (arr[n] > max)
//             max = arr[n];
//     }
//     return max;
// }
// int main()
// {
//     int n = 6;
//     int arr[] = {1, 2, 37, 4, 5, 6};

//     cout << maxx(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int size = 6;
//     int z = size - 1;
//     int arr[] = {1, 2, 3, 4, 5, 6};

//     for (int i = 0; i < size/2; i++)
//     {
//         int x;

//         x = arr[i];

//         arr[i] = arr[z - i];
//         arr[z - i] = x;

//     }
// int i=0;
//     while(size--)
//         cout << arr[i++] << endl;

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int size = 6;

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     sort(arr, arr+size);

//    cout<<arr[size-1]<<endl;
//    cout<<arr[size-2];
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int size = 6, key;

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     cout << "enter the key" << endl;
//     cin >> key;

//     for (int i = 0; i < size; i++)
//     {

//         if (arr[i] == key)
//             cout << "key found :\nIndex is:" << i;
//     }

//     return 0;
// }








