#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4,  max;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 
    max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ? n2 : (n3 > n4 ? n3 : n4));
    printf("%d",max);
    return 0;
}