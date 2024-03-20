#include <iostream>
using namespace std;
int main()
{
    int i1, j1, i2, j2;
    cout << "Enter the order of first matrix :\n";
    cin >> i1;
    cout << "X ";
    cin >> j1;
   

    cout << "Enter the order of second matrix :\n";
    cin >> i2;
    cout << "X ";
    cin >> j2;

    if (i1 != i2 || j1 != j2)
    {

        cout << "cannot be added" << endl;
        return 0;
    }
     int arr1[i1][j1];
     int arr2[i1][j1];

    cout << "Enter the first  matrix\n";
    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j1; j++)
        {
            cout << "index is :" << i << "x" << j << endl;
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the second  matrix\n";
    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j1; j++)
        {
            cout << "index is :" << i << "x" << j << endl;
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j1; j++)
        {
            arr1[i][j]+= arr2[i][j];
        }
    }
    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j1; j++)
        {
            cout<<arr1[i][j];
        }
    }

    return 0;
}