#include <iostream>
#include <vector>
using namespace std;

int main() {
	for (int l = 0; l < 10; l++) {
		int T;
		cin >> T;
		int n = T;
		vector <int> num;
		bool arr[1000][255] = { false };
		int cnt = 0;
		for (int i = 0; i < T; i++) {
			int a;
			cin >> a;
			num.push_back(a);
			for (int j = 0; j < a; j++) {
				arr[i][j] = true;
			}
			if (i == T - 1) {
				for (int j = 2; j < n-2; j++) {
					for (int k = 0; k < 255; k++) {
						if (arr[j][k] == true)
							if (arr[j - 2][k] == false && arr[j - 1][k] == false && arr[j + 1][k] == false && arr[j + 2][k] == false)
								cnt++;
					}
				}
			}

		}
		cout << '#' << l+1 << ' ' << cnt << endl;
	}
}