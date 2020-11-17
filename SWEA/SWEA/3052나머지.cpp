#include <iostream>

using namespace std;

int main() {
	bool arr[1001] = { false };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		int x;
		cin >> x;
		x %= 42;

		if (arr[x] == false) {
			arr[x] = true;
			cnt++;
		}
	}
	cout << cnt;
}