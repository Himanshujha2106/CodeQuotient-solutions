#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    if (b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c;
    }

    return 0;
}