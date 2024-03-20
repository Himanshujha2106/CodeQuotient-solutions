#include <iostream>
#include <string>

using namespace std;

int main()
{
  string letter="II";
  // cin >> letter;
  int i = 0, sum = 0, length = letter.length() - 1;
  int arr[length];

  // int I = 1,V = 5,X = 10, L = 50, C = 100,  D = 500, M = 1000;
  // int arr[7]={1,5,10,50,100,500,1000};

  while (letter[i] != '\0')
  {

    if (letter[i] == 'I')
      // sum = sum + 1;
      arr[i] = 1;

    else if (letter[i] == 'V')
      // sum = sum + 5;
      arr[i] = 5;

    else if (letter[i] == 'X')
      // sum = sum + 10;
      arr[i] = 10;

    else if (letter[i] == 'L')
      // sum = sum + 50;
      arr[i] = 50;

    else if (letter[i] == 'C')
      // sum = sum + 100;
      arr[i] = 100;

    else if (letter[i] == 'D')
      // sum = sum + 500;
      arr[i] = 500;

    else if (letter[i] == 'M')
      // sum = sum + 1000;
      arr[i] = 1000;

    i++;
  }

  for (int i = 0; i < length; i++)

    if (arr[i] >= arr[i + 1]||arr[i]<arr[i+1])
    {

      sum = sum + arr[i];
    }
    else if (arr[i] > sum)
    {

      sum = arr[i + 1] - sum;
    }

  cout << sum << endl;

  return 0;
}