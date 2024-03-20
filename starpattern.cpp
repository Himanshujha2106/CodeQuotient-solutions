#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i < 5; i++)
    {
        for (int j = 0; j <=4-i; j++)
        {
            cout<<" ";
          
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j==2*i-1||j==1)
          cout<<"*";
          else
          cout<<" ";
        }
        
        cout << "\n";
    }
 for (i=3; i > 0; i--)
    {
        for (int j = 0; j <=4-i; j++)
        {
            cout<<" ";
          
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j==2*i-1||j==1)
          cout<<"*";
          else
          cout<<" ";
        }
        
        cout << "\n";
    }    

    return 0;
}