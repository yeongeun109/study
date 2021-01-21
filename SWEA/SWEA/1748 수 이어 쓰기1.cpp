#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int x = 1;
	int a = 1;
	int jaritsu = 1;
	int cnt = 0;

	if (N < 10) {
		cnt = N;
	}
	else {
		while (true) {
			if (N / x >= 10) {
				cnt += jaritsu * 9 * x;
				x *= 10;
				jaritsu++;
			}
			else {
				cnt += jaritsu * (N - x + 1);
				break;
			}
		}
	}
	

	cout << cnt;
}