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
	//������� �ܾ� �ϳ��� ���� ���
	else
		cout << 1;
}