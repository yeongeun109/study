#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, K;
		cin >> N >> K;
		vector< vector <int> > arr;
		for (int j = 0; j < N; j++) {
			vector<int> arr2;
			int num;
			for (int i = 0; i < N; i++) {
				cin >> num;
				arr2.push_back(num);
			}
		
			arr.push_back(arr2);
			
		}
		
		int ans = 0;
		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int j = 0; j < N; j++) {
				if (arr[i][j] == 0) {
					if (cnt == K)
						ans++;
					cnt = 0;
				}
				else
					cnt++;
				if (j == N-1) {
					if (cnt == K)
						ans++;
				}
			}
			
		}
		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int j = 0; j < N; j++) {
				if (arr[j][i] == 0) {
					if (cnt == K)
						ans++;
					cnt = 0;
				}
				else
					cnt++;
				if (j == N - 1) {
					if (cnt == K)
						ans++;
				}
			}

		}
		cout << '#' << i+1 << ' ' << ans << endl;
	}
}