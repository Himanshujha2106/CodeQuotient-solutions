
#include <iostream>
using namespace std;
int main()
{
    int n, z;
    // cin>>n;
    n = 5;

    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n||i==1||i==n||i==3&&j==3)
            {
                cout << " s";
            }
           

            else
            {
                cout << "  ";
            }
        }

        cout << "\n";
    }
  
    return 0;
}