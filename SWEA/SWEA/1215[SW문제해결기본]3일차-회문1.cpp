#include <iostream>

using namespace std;

int main() {
	
	int N;
	
	for (int i = 0; i < 10; i++) {
		char a[8][8];
		int cnt = 0;
		cin >> N;

		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++) {
				cin >> a[j][k];
			}
		}
		//string a[1][8] = {"A", "B", "B", "B", "B", "A", "C", "A" };

		//°¡·Î Å½»ö
		for (int j = 0; j < 8; j++){
			for (int k = 0; k < 8 - N + 1; k++) {
				int x = k, y = k + N - 1;
				int cnt2 = 0;

				for (int l = 0; l < N / 2; l++) {	
					if (a[j][x] == a[j][y]) {
						x++; y--; cnt2++;
					}
				}
				if (cnt2 == N / 2) {
					cnt++;
				}
			}
		}

		//¼¼·ÎÅ½»ö
		for (int k = 0; k < 8; k++) {
			for (int j = 0; j < 8 - N + 1; j++) {
				int x = j, y = j + N - 1;
				int cnt2 = 0;

				for (int l = 0; l < N / 2; l++) {
					if (a[x][k] == a[y][k]) {
						x++; y--; cnt2++;
					}
				}
				if (cnt2 == N / 2) {
					cnt++;
				}
			}
		}

		cout << '#' << i+1 << ' ' << cnt << endl;
	}
}