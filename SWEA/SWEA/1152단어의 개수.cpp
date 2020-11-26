#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int cnt = 0;
	int space = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 32) {
			space++;
			if(i != 0 && i != s.size()-1)
				cnt++;
		}
	}

	if (s.size() == space) {
		cout << 0;
	}
	else if (cnt != 0)
		cout << ++cnt;
	//공백없이 단어 하나만 들어온 경우
	else
		cout << 1;
}