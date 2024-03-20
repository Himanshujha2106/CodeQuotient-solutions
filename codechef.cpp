#include <iostream>
using namespace std;

int main()
{

	int mods, m = 100;
	;

	int bigbro[8][3][3] = {
		{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
		{{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
		{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
		{{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
		{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
		{{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
		{{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
		{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},                       

	};
	int arr[3][3] = {{4,9,2}, {3,5,7}, {8,1,5}};
	for (int k = 0; k <8; k++)
	{
		int sum = 0;

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				if (bigbro[k][i][j] != arr[i][j])
				{

					mods = arr[i][j] - bigbro[k][i][j];
					if (mods < 0)
						mods = mods * -1;
					sum += mods;
				}
			}
		}
		m = min(m, sum);
		
	}
	cout << m << endl;
	return 0;
}
