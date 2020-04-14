#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		vector<char > arr;
		int N;
		cin >> N;
		int sum = 0;
		for (int j = 0; j < N; j++) {

			char alp;
			int num;
			cin >> alp >> num;
			sum += num;
			for (int k = 0; k < num; k++) {
				arr.push_back(alp);
			}
		}
		cout << '#' << i + 1 << '\n';
		int k = 0;
		while (sum != 0) {
			cout << arr[k];
			k++;
			sum--;
			if (k % 10 == 0)
				cout << '\n';
		}
		cout << '\n';
	}

}