#include <iostream>
using namespace std;
int func(int n)
{
    int ans = 0;
    int x = 1;
    while (x < n){
        x = x * 2;
    }    
    cout<<x<<endl;
    x = x / 2;
    
    while (x > 0)
    {
        int last = n / x;
        n = n - last * x;
        x = x / 2;
        ans = ans * 10 + last;
    }
    return ans;

    return x;
}
int main()
{
    int x;
    cin >> x;
    cout << func(x);
    return 0;
}