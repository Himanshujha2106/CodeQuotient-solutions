#include<iostream>
using namespace std;
int main(){
    int n,sum=1;
    cin>>n;
    while(n>0){
        sum=sum*n;
        n--;
    }
cout<<sum;
return 0;
}