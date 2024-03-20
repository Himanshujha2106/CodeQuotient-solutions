// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int  n=6;
//     int arr[]={1,2,3,4,5,6};
//     while(n--){
//         cout<<arr[n]<<endl;
//     }

// return 0;
// }

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






#include <iostream>
using namespace std;
int main()
{
    int n = 6, maxx = 0;
    int arr[] = {1, 2, 37, 4, 5, 6};
    while (n--)
    {
        if (arr[n] > maxx)
            maxx = arr[n];
    }

    cout << maxx << endl;
    return 0;
}
