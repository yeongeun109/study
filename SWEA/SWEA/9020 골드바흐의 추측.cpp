#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	int arr[10001];

	for (int i = 2; i <= 10000; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= 10000; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = i * 2; j <= 10000; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int index;

		for (int j = 2; j <= n / 2; j++) {
			if (arr[j] != 0) {
				if (arr[n - j] != 0) {
					index = j;
				}
			}
		}

		cout << index << ' ' << n - index << endl;
	}
}