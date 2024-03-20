#include<iostream>
using namespace std;
int factorial(int n){
  
    int sum=1;
    
    while(n>0){
        sum=sum*n;
        n--;
    }
cout<<sum;

}
int main(){
    int n;
    cin>>n;
    factorial(n);
return 0;
}