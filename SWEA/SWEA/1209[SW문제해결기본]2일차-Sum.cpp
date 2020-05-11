#include <iostream>

using namespace std;
//4 4 3 2 1 2 2 1 6 5 3 5 4 6 7 4 2 5 9 7 8 1 9 5 6
int main() {
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		int arr[100][100] = { 0 };
		int max = 0, sum = 0;
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				cin >> arr[j][k];
			}
		}

		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				sum += arr[j][k];
			}
			if (sum > max)
				max = sum;
			sum = 0;
		}
		
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				sum += arr[k][j];
			}
			if (sum > max)
				max = sum;
			sum = 0;
		}
		sum = 0;
		for (int j = 0; j < 100; j++) {
			sum += arr[j][j];
		}
		if (sum > max)
			max = sum;
		sum = 0;

		for (int j = 0; j < 100; j++) {
			sum += arr[j][100 - j];
		}
		if (sum > max)
			max = sum;

		cout << '#' << a << ' ' << max << endl;
	}
}