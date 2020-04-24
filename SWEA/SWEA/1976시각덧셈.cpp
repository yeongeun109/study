#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int h1, m1, h2, m2, h3, m3;
		cin >> h1 >> m1 >> h2 >> m2;

		h3 = h1 + h2;
		if (h3 > 12)
			h3 -= 12;
		m3 = m1 + m2;
		if (m3 > 60) {
			m3 -= 60;
			h3++;
		}
		
		cout << '#' << i+1 << ' ' << h3 << ' ' << m3 <<endl;
	}
}