#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int arr[15][15];
	int x = 1;

	for (int i = 0; i < 15; i++) {
		arr[0][i] = x;
		x++;
		arr[i][0] = 1;
	}


	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;

		cout << arr[k][n - 1] << endl;
	}
}