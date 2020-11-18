#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	int max = 0;
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		if (x > max)
			max = x;
	}

	for (int i = 0; i < n; i++) {
		double x = (double)arr[i] / max * 100;
		sum += x;
	}
	avg = sum / n;

	cout << avg;
}