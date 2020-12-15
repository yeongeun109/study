#include <iostream>

using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int cnt = 0;
	int num = a - b;

	if ((v - b) % num == 0) {
		cnt = (v - b) / num;
	}
	else {
		cnt = (v - b) / num + 1;
	}

	cout << cnt;
}