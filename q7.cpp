#include <iostream>
using namespace std;
int palindrome(int n)
{
    int b, r = 0, reverse = 0;

    b = n;
    while (b != 0)
    {
        r = b % 10;
        b = b / 10;
        reverse = reverse * 10 + r;
    }
    if (reverse == n)
        cout << "Palindrome";
    else
        cout << "Not Palimdrome";
}

int main()
{
    int n;
    cin >> n;
    palindrome(n);
    return 0;
}