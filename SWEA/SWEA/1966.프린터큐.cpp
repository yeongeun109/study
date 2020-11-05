#include <iostream>
#include <queue>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M, cnt = 0; //������ ����, ã�� ������ȣ
		cin >> N >> M;

		queue<pair<int,int>> q; //�ε���, �߿䵵 ����ť
		priority_queue <int> pq; //�߿䵵 �켱���� ť

		for (int j = 0; j < N; j++) {
			int x;
			cin >> x;
			q.push({ j,x });
			pq.push(x);
		}

		while(q.empty() == 0){
			int index = q.front().first;
			int val = q.front().second;

			q.pop();

			if (val == pq.top()) {
				pq.pop();
				cnt++;
				if (index == M)
					cout << cnt << endl;
			}
			else {
				q.push({ index, val });
			}
		}
	}
}