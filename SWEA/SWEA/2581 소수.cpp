#include <iostream>

using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = 10000;
	bool existFlag = false;

	for (int i = M; i <= N; i++) {
		if (i != 1) {
			int a = 1;
			bool flag = false;
			while (a <= i) {
				if (i % a == 0) {
					if (a != 1 && a != i) {
						flag = true;
					}
				}
				a++;
			}

			if (flag == false) {
				sum += i;
				if (i < min) {
					min = i;
				}

				existFlag = true;
			}
		}
	}

	if (existFlag == false) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}
}