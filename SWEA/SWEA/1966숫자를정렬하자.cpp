#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		vector <int> arr;
		for (int j = 0; j < N; j++) {
			int a;
			
			cin >> a;
			arr.push_back(a);
		}
		int max = 0;
		int temp;
		for (int k = 0; k < N; k++) {
			for (int l = k+1; l < N; l++) {
				if (arr[k] > arr[l]) {
					temp = arr[k];
					arr[k] = arr[l];
					arr[l] = temp;
				}
			}
		}
		
		cout << '#' << i + 1 << ' ';
		for (int j = 0; j < N; j++)
			cout << arr[j] << ' ';
		cout << endl;
	}
}