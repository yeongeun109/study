#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[246913];

	for (int i = 2; i <= 246912; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= 246912; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = i * 2; j <= 246912; j += i) {
			arr[j] = 0;
		}
	}

	while (n != 0) {
		int cnt = 0;
		for (int i = n + 1; i < 2 * n; i++) {
			if (arr[i] != 0) {
				cnt++;
			}
		}

		if (n == 1) {
			cout << 1 << endl;
		}
		else {
			cout << cnt << endl;
		}
		
		cin >> n;
	}
}