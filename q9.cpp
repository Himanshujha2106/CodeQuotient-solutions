#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (i; i < 5; i++)
    {
        for (int j = 0; j <= 5-i; j++)
        {
            cout<<" ";
          
        }
        for (int j = 0; j <= i; j++)
        {
          cout<<"*";
        }
        
        cout << "\n";
    }
    return 0;
}