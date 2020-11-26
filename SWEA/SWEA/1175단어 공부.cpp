#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[26];
	
	fill_n(arr, 26, 0);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			arr[s[i] - 32 - 65]++;
		}
		else {
			arr[(int)s[i] -65]++;
		}
	}
	
	int max = 0;
	bool flag = false;
	int idx;

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max)
			flag = true;
		else if (arr[i] > max) {
			max = arr[i];
			flag = false;
			idx = i;
		}
			
	}

	if (flag == true) {
		cout << '?';
	}
	else {
		cout << (char)(idx + 65);
	}
}