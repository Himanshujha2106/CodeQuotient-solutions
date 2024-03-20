#include<stdio.h>
int main (){
    
    int i,n,a=0,b=1,sum=0;
    printf("enter upto a certain number \n");
    scanf("%d",&n);
    while(sum<=n)
    {
        printf("%d  ",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
   
}