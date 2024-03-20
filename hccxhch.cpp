#include <iostream>
using namespace std;
int main()
{
    int k;
    for (int i = 0; i < 50; i++)
    {
        int z = i & 1;
        cout << i << "   " << z << endl;
       
    }
    return 0;
}