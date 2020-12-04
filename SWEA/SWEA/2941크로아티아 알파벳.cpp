#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt = 0;
	int res = str.size();

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '=' || str[i] == '-') {
			res -= 1;

			if (i >= 2) {
				if (str[i - 1] == 'z' && str[i - 2] == 'd') {
					res -= 1;
				}
			}
		}

		if (str[i] == 'j') {
			if (i >= 1) {
				if (str[i - 1] == 'l' || str[i - 1] == 'n') {
					res -= 1;
				}
			}
		}
	}

	cout << res;
}