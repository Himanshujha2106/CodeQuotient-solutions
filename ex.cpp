
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    bool flag = 0;
    cin >> n;
    string s[n] = {};

    s[0] = "aabc";
    s[1] = "abcd";
    s[2] = "acde";
    int i, count = 0;
    for (i = 0; i < s[0].length(); i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((s[0])[i] != (s[j])[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
    }
    if (count > 0)
    {

        for (int i = 0; i < count; i++)
            cout << (s[0])[i];
    }
    else
    {
        cout << "kn";
    }
  

    return 0;
}