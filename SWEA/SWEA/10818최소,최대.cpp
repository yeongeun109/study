#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	int min = 1000000;
	int max = -1000000;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	cout << min << ' ' << max;
}