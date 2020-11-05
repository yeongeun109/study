#include <iostream>
#include <vector>

using namespace std;

int* rotate(int direct, int a[]) {
	if (direct == 1) { //ø¿∏•¬ ¿∏∑Œ µπ∏Æ±‚
		int temp = a[7];
		for (int i = 7; i >= 1; i--) {
			a[i] = a[i - 1];
		}
		a[0] = temp;
	}
	else { //øﬁ¬ 
		int temp = a[0];
		for (int i = 0; i < 7; i++) {
			a[i] = a[i + 1];
		}
		a[7] = temp;
	}
	return a;
}

int main() {
	int T; //≈È¥œπŸƒ˚ ∞≥ºˆ
	cin >> T;
	vector <vector<int>> a;

	for (int i = 0; i < T; i++) { //≈È¥œ πËø≠ ¿˙¿Â
		vector <int> b;
		string num;
		cin >> num;
		for (int j = 0; j < 8; j++) {
			b.push_back(num[j] - 48);
		}
		a.push_back(b);
	}

	int K; //»∏¿¸ »Ωºˆ
	cin >> K;
	int topni_num, direct; //µπ∏± ≈È¥œ, πÊ«‚
	

	int cnt = 0;

	for (int i = 0; i < K; i++) {
		vector <bool> arr_connect; //≈È¥œ≥¢∏Æ ø¨∞·ø©∫Œ
		cin >> topni_num >> direct;
		int rotate_topni = topni_num -1;
		int arr_rotate[8], arr_temp[8];
		
		//≈È¥œ≥¢∏Æ ø¨∞· πËø≠ √ ±‚»≠
		for (int j = 0; j < T - 1; j++) {
			if (a[j][2] == a[j + 1][6])
				arr_connect.push_back(false);
			else
				arr_connect.push_back(true);
		}

		for (int j = 0; j < 8; j++) {
			arr_rotate[j] = a[rotate_topni][j];
		}
		rotate(direct, arr_rotate);

		for (int j = 0; j < 8; j++) {
			a[rotate_topni][j] = arr_rotate[j];
		}
		//ø¿∏•¬  ≈Ωªˆ
		if (rotate_topni <= T - 2) {
			int temp_direct = direct;
			while (arr_connect[rotate_topni] == true) {
				
				temp_direct *= -1;

				for (int j = 0; j < 8; j++) {
					arr_temp[j] = a[rotate_topni + 1][j];
				}

				rotate(temp_direct, arr_temp);

				for (int j = 0; j < 8; j++) {
					a[rotate_topni + 1][j] = arr_temp[j];
				}

				rotate_topni += 1;

				if (rotate_topni >= T - 1)
					break;
			}
		}

		rotate_topni = topni_num - 2;

		//øﬁ¬  ≈Ωªˆ
		if (rotate_topni >= 0) {
			int temp_direct = direct;
			while (arr_connect[rotate_topni] == true) {
				
				temp_direct *= -1;
				for (int j = 0; j < 8; j++) {
					arr_temp[j] = a[rotate_topni][j];
				}
				rotate(temp_direct, arr_temp);

				for (int j = 0; j < 8; j++) {
					a[rotate_topni][j] = arr_temp[j];
				}
				
				rotate_topni -= 1;

				if (rotate_topni < 0)
					break;
			}
		}
	}

	int sero;
	sero = a.size();
	for (int i = 0; i < sero; i++) {
		if (a[i][0] == 1)
			cnt++;
	}
	cout << cnt;
}
