#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int b_1 = b % 10;
	int b_10 = (b % 100 - b_1)/10;
	int b_100 = (b % 1000 - b_10 - b_1)/100;
	cout << a * b_1 << endl;
	cout << a * b_10 << endl;
	cout << a * b_100 << endl;
	cout << a * b;
}