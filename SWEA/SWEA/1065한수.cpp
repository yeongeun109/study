#include <iostream>

using namespace std;

int hansoo(int n) {
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			cnt++;
		}
		else {
			if (i / 100 - (i - (i/100)*100)/10 == (i - (i / 100) * 100) / 10 - i % 10)
				cnt++;
		}
	}

	return cnt;
}
int main() {
	int n;
	cin >> n;
	cout << hansoo(n);
}