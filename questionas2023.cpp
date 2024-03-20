#include<iostream>
using namespace std;
int get(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int set(int n,int pos){
    return (n | (1<<pos));
}
int unset(int n,int pos){
    int x=~(1<<pos);
    return (n & x);
}
int main(){
    int n,q,z;
   
  cout<<unset(5,2);




return 0;
}