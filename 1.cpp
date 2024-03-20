#include<iostream>
using namespace std;
int main(){
long long int x;
cout<<"enter the table"<<endl;
cin>>x;
int m=x;
for(int j=1;j<=10;j++){

    cout<<x<<endl;
    x=x+m;
}

return 0;
}