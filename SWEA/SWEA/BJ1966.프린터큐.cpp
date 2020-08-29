#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		//vector<int> answer;
		queue<int> q;
		queue<int> q_index;
		vector<char> arr2;
		vector<int> arr;
		int N, M;
		int index = 1;
		//char target = ' ';
		cin >> N >> M;

		for (int j = 0; j < N; j++) {
			int x;
			cin >> x;
			/*if (j == M)
				target = alph;*/
			q.push(x);
			q_index.push(index);
			index++;
			arr.push_back(x);
		}
		while (q.empty() == 0) {
			bool flag = false;

			int max_arr = 0;
			int max_index = 0;
			for (int k = 0; k < arr.size(); k++) {
				if (arr[k] > max_arr) {
					max_arr = arr[k];
					max_index = k;
				}
			}

			for (int k = 1; k < q.size(); k++) {
				if (q.front() < arr[k]) {
					int a = q.front();
					q.pop();
					q.push(a);

					char b = q_index.front();
					q_index.pop();
					q_index.push(b);

					flag = true;
					break;
				}
			}
			if (flag == false) {
				q.pop();
				char a = q_index.front();
				arr2.push_back(a);
				q_index.pop();
				arr.erase(arr.begin() + max_index);
			}
		}

		for (int j = 0; j < N; j++) {
			if (arr2[j] == M+1) {
				//answer.push_back(j + 1);
				cout << j + 1 << endl;
				break;
			}

		}
	}

	/*for (int i = 0; i < T; i++) {
		cout << answer[i];
		if (i < T - 1)
			cout << endl;
	}*/
}