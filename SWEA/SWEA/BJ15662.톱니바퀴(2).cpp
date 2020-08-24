#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T; //Åé´Ï¹ÙÄû °³¼ö
	cin >> T;
	vector <vector<int>> a;
	
	for (int i = 0; i < T; i++) {
		vector <int> b;
		string num;
		cin >> num;
		for (int j = 0; j < 8; j++) {
			b.push_back(num[j] - 48);
		}
		a.push_back(b);
	}

	int K; //È¸Àü È½¼ö
	cin >> K;
	int topni_num, direct;
	for (int i = 0; i < K; i++) {
		cin >> topni_num >> direct;
		vector <bool> arr_connect;
		vector <char> arr_direct;

		for (int j = 0; j < T - 1; j++) {
			if (a[j][2] == a[j][6])
				arr_connect[j] = true;
			else
				arr_connect[j] = false;
		}

		int x = topni_num - 1;
		while (arr_connect[x] != true) {
			if (direct == 1) { // ¿À¸¥ÂÊÀ¸·Î ÇÑ Ä­ ÀÌµ¿
				for (int j = 0; j < 8; j++) {
					arr_direct[j] = 
				}
			}
			else
			
			x--;
		}
	}
}

/*int temp;
				temp = a[x][7];
				for (int j = 1; j < 7; j++) {
					a[x][j] = a[x][j + 1];
				}
				a[x][0] = temp;*/