#include <iostream>

using namespace std;

int main() {
	int arr[9];
	int max = 0;
	int index = -1;

	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		arr[i] = n;
		if (n > max) {
			max = n;
			index = i;
		}
	}
	cout << max << '\n' << index + 1;
}