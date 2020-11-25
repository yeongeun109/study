#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	int sum = 0;
	cin >> str;

	for (int i = 0; i < n; i++) {
		sum += str[i] - 48;
	}

	cout << sum;
}