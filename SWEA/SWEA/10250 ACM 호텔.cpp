#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, w, c;
		cin >> h >> w >> c;

		int a, b;
		a = c % h;
		b = c / h + 1;

		if (a == 0) {
			a = h;
			b = c / h;
		}

		cout << a * 100 + b << endl;
	}
}