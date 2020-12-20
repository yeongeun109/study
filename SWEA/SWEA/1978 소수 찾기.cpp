#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x != 1) {
			int a = 1;
			bool flag = false;
			while (a <= x) {
				if (x % a == 0) {
					if (a != 1 && a != x) {
						flag = true;
					}
				}
				a++;
			}

			if (flag == false) {
				cnt++;
			}
		}
	}

	cout << cnt;
}