#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (b >= c) {
		cout << -1;
	}
	else {
		int x = a / (c - b) + 1;
		cout << x;
	}
}