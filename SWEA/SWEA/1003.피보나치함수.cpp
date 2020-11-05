#include <iostream>

using namespace std;
int arr[41];
int fibo(int a) {
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else if (a < 0)
		return 1;
	else {
		if (arr[a] > 0)
			return arr[a];
		else {
			arr[a] = fibo(a - 2) + fibo(a - 1);
			return arr[a];
		}
	}
}

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		cout << fibo(N - 1) << ' ' << fibo(N) << endl;
	}
}