// #include <stdio.h>

// int main()
// {
//     int n1, n2, n3, n4, max;
//     printf("Enter number A,B,C,D \n");

//     scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

//     max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ? n2 : (n3 > n4 ? n3 : n4));
//     printf("%d", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n1,temp,r,z=0;
//     printf("Enter number\n");

//     scanf("%d", &n1);
//     temp=n1;

// while(temp!=0){
//         r= temp%10;
//         temp=temp/10;
//         z=z+r*r*r;

//     }
//    if(z==n1)
//    printf("Armstrong number");
//    else
//    printf("Not an armstrong number");
//     return 0;
// }

// #include <stdio.h>
// int fibbonacci(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (n == 2 || n == 3)
//     {
//         return 1;
//     }
//     return fibbonacci(n - 1) + fibbonacci(n - 2);
// }

// int main()
// {
//     int n;
//     printf("Enter number\n");

//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         printf(" %d", fibbonacci(i));
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i=1; i < 7; i++)
//     {
//         for (int j = 0; j <=5-i; j++)
//         {
//            printf(" ");

//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             if(j==2*i-1||j==1)
//                      printf(" ");

//           else
//                      printf("*");

//         }

//            printf("\n");

//     }

//     return 0;
// }

// #include <stdio.h>
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     return n*factorial(n-1);
// }

// int main()
// {
//     int n;
//     printf("Enter number\n");
//     scanf("%d", &n);

//         printf("%d", factorial(n));

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the year\n");
//     scanf("%d",&n);
//     if(n%100)
//     printf("Not a leap year");

//    else if(n%4==0||n%400==0)
//     printf("leap year");

// return 0;
// }

// #include<stdio.h>

// int main(){
//     int num,pow,res=1;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     printf("Enter the power\n");
//     scanf("%d",&pow);
//     for(int i=1;i<=pow;i++)
//     res=res*num;

//     printf("%d",res);

// return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d", &num);
//     switch (num > 0)
//     {
//     case 1:
//         printf("Number is positive");

//         break;
//     case 0:
//         switch (num < 0)
//         {
//         case 1:
//             printf("Number is negative");

//             break;
//         case 0:
//             printf("Number is zero");

//             break;
//         }

//         break;

//     default:
//         printf("Number is 0");

//         break;
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//    int i,j;
//    for(i=1;i<6;i++){
//     for(int j=1;j<6;j++){
// if(i%2!=0)
// printf("1");
// else
// printf("0");

//     }
//     printf("\n");
//    }

// return 0;
// }

// level 2*********************************************************************************************************

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the year\n");
//     scanf("%d",&n);
//     (n%100==0)? printf("Not a leap year"):(n%4==0||n%400==0)?printf("Leap year"):printf("not a leap year");

// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, z=1;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {

//             z = 0;
//             break;
//         }
//     }
//     if (z == 0)
//         printf("Not a Prime number");
//     else
//         printf("prime number");

//     return 0;
// }


// #include<stdio.h>
// int main(){
//    int i,j;
//    for(i=1;i<6;i++){
//     for(int j=1;j<6;j++){
// if(j%2!=0)
// printf("1");
// else
// printf("0");

//     }
//     printf("\n");
//    }

// return 0;
// }