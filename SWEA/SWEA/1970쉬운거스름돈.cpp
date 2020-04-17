#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		int arr[8] = { 0,0,0,0,0,0,0,0 };
		if (N / 50000 != 0) {
			arr[0] = N / 50000;
			N -= 50000 * (N / 50000);
		}
		if (N / 10000 != 0) {
			arr[1] = N / 10000;
			N -= 10000*(N/10000);
		}
		if (N / 5000 != 0) {
			arr[2] = N / 5000;
			N -= 5000*(N / 5000);
		}
		if (N / 1000 != 0) {
			arr[3] = N / 1000;
			N -= (N / 1000)*1000;
		}
		if (N / 500 != 0) {
			arr[4] = N / 500;
			N -= (N / 500)*500;
		}
		if (N / 100 != 0) {
			arr[5] = N / 100;
			N -= (N / 100) * 100;
		}
		if (N / 50 != 0) {
			arr[6] = N / 50;
			N -= (N / 50) * 50;
		}
		if (N / 10 != 0) {
			arr[7] = N / 10;
			N -= (N / 10) * 10;
		}

		cout << '#' << i + 1 << endl;
		for(int j = 0; j< 8; j++){
			cout << arr[j] << ' ';
		}
		cout << endl;
	}
}