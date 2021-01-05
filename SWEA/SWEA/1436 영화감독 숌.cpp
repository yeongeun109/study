#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	int i = 666;
	int x = 1000;
	int jaritsu = 3;

	while (cnt < n) {
		i++;
		string a = to_string(i);

		for (int j = 0; j < jaritsu; j++) {
			if (j + 2 <= jaritsu - 1) {
				if (a[j] == '6' && a[j + 1] == '6' && a[j + 2] == '6') {
					cnt++;
					break;
				}
			}
		}

		if (i % x == 0) {
			x *= 10;
			jaritsu++;
		}
	}
	cout << i;
}