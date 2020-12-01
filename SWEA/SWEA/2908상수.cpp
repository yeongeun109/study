#include <iostream>

using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	int resA, resB;

	resA = (A[2] - 48) * 100 + (A[1] - 48) * 10 + (A[0] - 48);
	resB = (B[2] - 48) * 100 + (B[1] - 48) * 10 + (B[0] - 48);
	
	if (resA > resB)
		cout << resA;
	else
		cout << resB;
}