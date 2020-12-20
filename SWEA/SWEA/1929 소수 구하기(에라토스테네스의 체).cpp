#include <iostream>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	int arr[1000001];

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= N; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = i * 2; j <= N; j += i) {
			arr[j] = 0;
		}
	}

	if (M == 1)
		M++;

	for (int i = M; i <= N; i++) {
		if (arr[i] != 0) {
			printf("%d\n", i);
		}
	}
}