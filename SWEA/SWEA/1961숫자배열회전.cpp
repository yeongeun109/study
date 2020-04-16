#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, cnt = 1;
		vector < vector <int> > arr;
		
		cin >> N;
		for (int j = 0; j < N; j++) {
			vector <int> arr1;
			for (int k = 0; k < N; k++) {
				int a; 
				cin >> a;
				arr1.push_back(a);
			}
			arr.push_back(arr1);
		}
		
		vector < vector <int> > arr90, arr180, arr270;

		for (int j = 0; j < N; j++) {
			vector <int> arr90_1;
			int len = N-1;
			for (int k = 0; k < N; k++) {
				arr90_1.push_back(arr[len][j]);
				len--;
			}
			arr90.push_back(arr90_1);
		}

		for (int j = 0; j < N; j++) {
			vector <int> arr180_1;
			int len = N - 1;
			for (int k = 0; k < N; k++) {
				arr180_1.push_back(arr90[len][j]);
				len--;
			}
			arr180.push_back(arr180_1);
		}

		for (int j = 0; j < N; j++) {
			vector <int> arr270_1;
			int len = N - 1;
			for (int k = 0; k < N; k++) {
				arr270_1.push_back(arr180[len][j]);
				len--;
			}
			arr270.push_back(arr270_1);
		}

		cout << '#' << i + 1 << endl;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cout << arr90[j][k];
			}
			cout << ' ';
			for (int k = 0; k < N; k++) {
				cout << arr180[j][k];
			}
			cout << ' ';
			for (int k = 0; k < N; k++) {
				cout << arr270[j][k];
			}
			cout << endl;
		}
	}
}