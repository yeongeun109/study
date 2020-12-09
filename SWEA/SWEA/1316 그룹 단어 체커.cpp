#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		bool arr[26];
		fill_n(arr, 26, false);
		bool flag = false;
		char a = '.';

		for (int j = 0; j < str.size(); j++) {
			if (str[j] != a) { //연속된 문자인지 검사
				a = str[j];
				if (arr[str[j] - 97] == true) {
					flag = true;
				}
				else {
					arr[str[j] - 97] = true;
				}
			}	
		}

		if (flag == false) {
			cnt++;
		}
	}

	cout << cnt;
}