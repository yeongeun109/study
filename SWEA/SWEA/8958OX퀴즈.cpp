#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string arr;
		cin >> arr;

		int cnt = 0;
		int sum = 0;

		for (int j = 0; j < arr.length(); j++) {
			if (arr[j] == 'O') {
				cnt++;
				sum += cnt;
			}
			else {
				cnt = 0;
			}
		}
		cout << sum << endl;
	}
}