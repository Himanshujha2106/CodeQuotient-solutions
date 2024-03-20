#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        if (a > c && a > d)
        {
            cout << a;
        }
        else if (a > c && a < d)
            cout << d;
        else if (a > d && a < c)
        {
            cout << c;
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            cout << b;
        }
        else
        {
            cout << d;
        }
    }
    else if (c > d)
        cout << d;
    else
        cout << d;

    return 0;
}