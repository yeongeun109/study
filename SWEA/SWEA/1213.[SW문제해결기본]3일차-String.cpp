#include <iostream>
#include <vector>
using namespace std;

int main() {
	for (int k = 0; k < 10; k++) {
		int a;
		cin >> a;
		string str, dum; vector<char> str2;
		cin >> str >> dum;
		for (int i = 0; i < dum.length(); i++) {
			str2.push_back(dum[i]);
		}

		int j = 0, cnt = 0, ans = 0; char x = NULL;
		for (int i = 0; i < str2.size(); i++) {
			if (str2[i] != str[j]) {
				if (str2[i] != x) {
					cnt = 0;
					j = 0;
				}
			}
			else {
				cnt++;
				j++;
				x = str2[i];
			}
			if (cnt == str.length()) {
				ans++;
				j = 0;
				cnt = 0;
			}
		}
		cout << '#' << a << ' ' << ans << endl;
	}
	
}