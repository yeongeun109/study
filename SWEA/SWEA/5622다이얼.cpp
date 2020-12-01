#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	int result = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 65 && str[i] <= 67) {
			result += 3;
		}
		else if (str[i] >= 68 && str[i] <= 70) {
			result += 4;
		}
		else if (str[i] >= 71 && str[i] <= 73) {
			result += 5;
		}
		else if (str[i] >= 74 && str[i] <= 76) {
			result += 6;
		}
		else if (str[i] >= 77 && str[i] <= 79) {
			result += 7;
		}
		else if (str[i] >= 80 && str[i] <= 83) {
			result += 8;
		}
		else if (str[i] >= 84 && str[i] <= 86) {
			result += 9;
		}
		else if (str[i] >= 87 && str[i] <= 90) {
			result += 10;
		}
	}

	cout << result;
}
