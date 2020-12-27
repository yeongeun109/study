#include <iostream>

using namespace std;

int main() {
	int x, y;
	int xarr[1001] = { 0 };
	int yarr[1001] = { 0 };

	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		xarr[x]++;
		yarr[y]++;
	}

	for (int i = 1; i < 1001; i++) {
		if (xarr[i] == 1)
			cout << i << ' ';
	}

	for (int i = 1; i < 1001; i++) {
		if (yarr[i] == 1)
			cout << i;
	}
}