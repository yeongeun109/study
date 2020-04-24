#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int arr[9][9] = { 0 };
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				cin >> arr[j][k];
			}
		}

		
		bool hey = false;
		int a = 0, b = 0;
		int result = 1;

		for (int j = 0; j < 9; j++) {
			int arr2[9] = { 0 };
			for (int k = 0; k < 9; k++) {
				arr2[arr[j][k] -1]++;

				if (arr2[arr[j][k]-1] > 1)
				{
					result = 0;
					hey = true;
					break;
				}
			}
			if (hey == true)
				break;
		}

		for (int j = 0; j < 9; j++) {
			int arr2[9] = { 0 };
			for (int k = 0; k < 9; k++) {
				arr2[arr[k][j] - 1]++;

				if (arr2[arr[k][j] - 1]> 1)
				{
					result = 0;
					hey = true;
					break;
				}
			}
			if (hey == true)
				break;
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				int arr2[9] = { 0 };
				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 3; l++) {
						arr2[arr[i * 3 + k][j * 3 + l] - 1]++;

						if (arr2[arr[i * 3 + k][j * 3 + l] - 1] > 1)
						{
							result = 0;
							hey = true;
							break;
						}
					}
					if (hey == true)
						break;
				}
				if (hey == true)
					break;
			}
			if (hey == true)
				break;
		}

		cout << '#' << i+1 << ' ' << result << endl;
	}
}