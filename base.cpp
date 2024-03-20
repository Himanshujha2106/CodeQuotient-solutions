#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    if(x==0){
        return 1;
    }
    return x*fact(x-1);
}
int func(int x,int n,int y){
   if (y==0){
        return 0;
    }
    return pow(x,n)/fact(n)+func(x,n+1,y-1);

}
int main(){
    int x,n,y;
    n=2;
  cout<<"Enter the value of x"<<endl;
  cin>>x;
  cout<<"Enter the no of terms"<<endl;
  cin>>y;

    cout<< 1-func(x,n,y)<<endl;

return 0;
}