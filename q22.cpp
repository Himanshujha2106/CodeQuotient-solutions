
#include <iostream>
using namespace std;
int main()
{
    int n, z;
    // cin>>n;
    n = 5;

    for (int i = 1; i <=n ; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
           cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }

        cout << "\n";
    }
  
    return 0;
}