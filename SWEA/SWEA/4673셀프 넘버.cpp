#include <iostream>
#include <vector>
using namespace std;

bool arr[10001] = { false };

void d(int n) {
	int res = n;

	while (true) {
		if (n == 0)
			break;
		res += n % 10;
		n /= 10;
	}

	if (res <= 10000)
		arr[res] = true;
}

int main() {
	for (int i = 1; i <= 10000; i++) {
		d(i);
	}

	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == false)
			cout << i << endl;
	}
}