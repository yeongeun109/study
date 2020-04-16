#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		int num = N;
		int arr[11][11];
		
		int a = 0, b = N-1, cnt = 1;

		for (int j = 0; j < num; j++) {
			arr[a][j] = cnt;
			cnt++;
		}
		//a++;
		num--;
		while (cnt <= N * N) {
			for (int j = 0; j < num; j++) {
				a++;
				arr[a][b] = cnt;
				cnt++;

				if (cnt == N * N)
					break;
			} //1번

			for (int j = 0; j < num; j++) {
				b--;
				arr[a][b] = cnt;
				cnt++;
				if (cnt == N * N)
					break;
			} //2번
			num--;

			for (int j = 0; j < num; j++) {
				a--;
				arr[a][b] = cnt;
				cnt++;
				if (cnt == N * N)
					break;
			}//3번

			for (int j = 0; j < num; j++) {
				b++;
				arr[a][b] = cnt;
				cnt++;
				if (cnt == N * N)
					break;
			}//4번
			num--;
		}
		
		cout << '#' << i + 1 << endl;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cout << arr[j][k] << ' ';
			}
			cout << endl;
		}
	}
}