#include <iostream>
//#include <vector>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	//vector<int> arr;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a < X) {
			cout << a << ' ';
		}
		//arr.push_back(a);
	}
}