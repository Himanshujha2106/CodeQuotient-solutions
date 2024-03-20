#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    bool check;
    int count = 0;
    int a[4] = {1, 2, 3, 4};
    int b[6] = {3, 4, 5, 6, 7, 8}, c[4] = {};

    for (int i = 0; i < 5; i++)
    {
        check = find(begin(b), end(b), a[i]) != end(b);

        if (check)
        {

            c[count++] = a[i];
        }
    }
    for(int i=0;i<count;i++){
        cout<<c[i]<<endl;
    }

    return 0;
}