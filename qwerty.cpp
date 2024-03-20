#include <iostream>
using namespace std;
int print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int min = 0;

    int flag = -1, size = 6;
    int arr1[10] = {1, 2, 3, 4, 5, 6};
    int arr2[10] = {1, 2, 3, 4, 7, 6};

    for (min = 0; min < 10; min++)
    {
        if (arr1[min] >= arr2[min])
        {
            arr1[min] = arr1[min] - arr2[min];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (arr1[i] != arr1[j])
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    cout << min - 1 << endl;

    return 0;
}