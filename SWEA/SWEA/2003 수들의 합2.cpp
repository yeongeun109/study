#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector <int> arr;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}

	int div_sum = 0;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		div_sum = 0;
		for (int j = i; j < N; j++) {
			div_sum += arr[j];
			if (div_sum == M) {
				cnt++;
			}
		}
	}

	cout << cnt;
}