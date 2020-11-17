#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int arr[10] = { 0 };

	cin >> a >> b >> c;
	
	int res = a * b * c;
	
	while (true) {
		int nam = res % 10;
		arr[nam]++;

		if (res < 10)
			break;
		res /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}