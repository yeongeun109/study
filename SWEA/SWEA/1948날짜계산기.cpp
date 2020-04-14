#include <iostream>

using namespace std;

int main() {
	int T;
	int sum = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int mon1 = 0, mon2 = 0, date1 = 0, date2 = 0;
		cin >> mon1 >> date1 >> mon2 >> date2;

		sum = 0;
		int count = mon1;
		if (mon1 == mon2) {
			sum = date2 - date1 + 1;
			count++;
		}
		else if (mon1 == 2) {
			sum += 28 - date1 + 1;
			count++;
		}
		else if (mon1 == 4 || mon1 == 6 || mon1 == 9 || mon1 == 11) {
			sum += 30 - date1 + 1;
			count++;
		}
		else {
			sum += 31 - date1 + 1;
			count++;
		}

		while (count < mon2) {
			if (count == 2)
				sum += 28;
			else if (count == 4 || count == 6 || count == 9 || count == 11)
				sum += 30;
			else
				sum += 31;
			count++;
		}
		if(mon1 != mon2)
			sum += date2;
		cout << '#' << i+1 << ' ' << sum << endl;
	}
	
}