#include<iostream>
using namespace std;
int main(){
    int n,z;
    cin>>n;
    // n=1;
    z=(1+n+1)/2;
    
for(int i=1;i<=n+2;i++){
    for(int j=1;j<=2*n-1;j++){
        if(j==n+1){
            cout<<"*";
        }
        else if(i==z){
            cout<<"*";
        }
        else{
            cout<<"-";
        }
    }
    
    cout<<"\n";

}
    cout<<z;
return 0;
}