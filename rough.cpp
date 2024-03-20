#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "prime" << endl;
    }
    return 0;
}