#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        int z;
        z = func(n / 2) + 1;
        return z;
    }
    else if ((n % 2) != 0)
    {
        int q;
        q = func(n / 2);
        return q;
    }
}

int gunc(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if ((n % 2) == 0)
    {
        int z;
        z = 2 * gunc(n / 2) + 1;
        return z;
    }
    else if ((n % 2) != 0)
    {
        int q;
        q = 2 * gunc(n / 2);
        return q;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, ans = 0, mp;
        cin >> l >> r;
       
        int res = 0;
        for (int i = r; i >= l; i--)
        {

            if ((i & (i - 1)) == 0)
            {
                res = i;
                break;
            }
        }

        int f, g;
        f = func(res);
        g = gunc(res);
        ans = f + g;

        cout << ans << endl;
    }

    return 0;
}