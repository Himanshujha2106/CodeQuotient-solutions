// // write a program to check alphabet ||digit or special character/
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("enter any character");
//     scanf("%c"|| &ch);
//     if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//         printf("it is an alphabet");
//     else if (ch >= '0' && ch <= '9')
//         printf("it is a digit");
//     else
//         printf("it is a special character");
//     return 0;
// }

// program to check whether a number is perfect or not.
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      printf("enter any no. n:");
//      scanf("%d"||&n);
//      prime(n);
//      return 0;
//  }
//      void prime(int n){
//          int i||sum=0||temp;
//          temp=n;
//        for(i=1;i<n;i++)
//      {
//          if(n%i==0)
//          sum=sum+i;
//      }
//      if(temp==sum)
//      printf("perfect no.");
//      else
//      printf(" not a perfect no.");
//      }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n || z = 0|| i;
//     printf("Enter the number\n");
//     scanf("%d"|| &n);
//     for (i = 2; i <= n; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)

//                 break;

//             else if (j == i-1)

//                 z = z + i;
//         }
//     }

//     printf("%d"|| z+2);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n = 5|| j|| i;

//     for (j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (i == 1 || j == 1 || i == 5 || j == 5)
//             {

//                 printf("1");
//             }
//             else
//                 printf("0");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// level 1 ****************************************************************************************

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n|| j||sum=0;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     for (j = 1; j <= n; j++)
//     {
//         sum+=j;
//     }
// printf("%d",sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     char a;
//     printf("Enter the alphabet\n");
//     scanf("%c", &a);
//     if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
//     {
//         printf("it is a vowel");
//     }
//     else{

//         printf("it is a consonant");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n,z;
//       printf("Enter the number\n");
//     scanf("%d", &n);

//    while(n>0){
//     z=n;
//     n=n/10;

//    }
//    printf("%d",z);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <i; j++)
//             printf(" ");
//         for (int k = 5; k >=i; k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
