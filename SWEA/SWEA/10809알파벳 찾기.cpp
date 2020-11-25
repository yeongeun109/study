#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	int arr[26];
	bool arr2[26];

	fill_n(arr, 26, -1);
	fill_n(arr2, 26, false);
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if(arr2[s[i] - 97] == false){
			arr[s[i] - 97] = i;
			arr2[s[i] - 97] = true;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}