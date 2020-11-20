#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long sum = 0;

	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}

	return sum;
}
int main() {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	cout << sum(a);
}