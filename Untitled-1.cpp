#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t)
{
    int len,a0=0,b0=0,a1=0,b1=0;
    cin>>len;
    char a[len];
    char b[len];
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
   for(int i=0;i<len;i++){
        cin>>b[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '0' )
          ++ a0;
        
      else if (b[i] == '0' )
          ++ b0;
          
         else if (a[i] == '1' )
          ++ a1;
          
         else if (a[i] == '1' )
          ++ b1;
          
          
         else if(a1==b1&&a1==b1){
              cout<<"YES"<<endl;
              
          }
         else {
             cout<<"NO"<<endl;
         }
    }
    
    t--;
}
	return 0;
}
