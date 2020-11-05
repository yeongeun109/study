#include <iostream>
#include <vector>

using namespace std;

int* rotate(int direct, int a[]) {
	if (direct == 1) { //오른쪽으로 돌리기
		int temp = a[7];
		for (int i = 7; i >= 1; i--) {
			a[i] = a[i - 1];
		}
		a[0] = temp;
	}
	else { //왼쪽
		int temp = a[0];
		for (int i = 0; i < 7; i++) {
			a[i] = a[i + 1];
		}
		a[7] = temp;
	}
	return a;
}

int main() {
	vector <vector<int>> a;

	for (int i = 0; i < 4; i++) { //톱니 배열 저장
		vector <int> b;
		string num;
		cin >> num;
		for (int j = 0; j < 8; j++) {
			b.push_back(num[j] - 48);
		}
		a.push_back(b);
	}

	int K; //회전 횟수
	cin >> K;
	int topni_num, direct; //돌릴 톱니, 방향


	int cnt = 0;

	for (int i = 0; i < K; i++) {
		vector <bool> arr_connect; //톱니끼리 연결여부
		cin >> topni_num >> direct;
		int rotate_topni = topni_num - 1;
		int arr_rotate[8], arr_temp[8];

		//톱니끼리 연결 배열 초기화
		for (int j = 0; j < 3; j++) {
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
		//오른쪽 탐색
		if (rotate_topni <= 2) {
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

				if (rotate_topni >= 3)
					break;
			}
		}

		rotate_topni = topni_num - 2;

		//왼쪽 탐색
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

	
	if (a[0][0] == 1)
		cnt += 1;
	if (a[1][0] == 1)
		cnt += 2;
	if (a[2][0] == 1)
		cnt += 4;
	if (a[3][0] == 1)
		cnt += 8;
	cout << cnt;
}
