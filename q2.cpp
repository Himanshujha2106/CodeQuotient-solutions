#include<iostream>
using namespace std;
int main(){
    int a,b,r=0,reverse=0;
    cin>>a;
    b=a;
    while(b!=0){
        r= b%10;
        b=b/10;
        reverse=reverse*10+r;

    }
   if(reverse==a)
   cout<<"palindrome";
else
cout<<"not palimdrome";

return 0;
}