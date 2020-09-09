#include <iostream>

using namespace std;

int arr[101][101];
bool visited[101] = { false };
int cnt = 0;

int dfs(int a) {
	visited[a] = true;
	for (int i = 0; i < 101; i++) {
		if (arr[a][i] == 1 && visited[i] != true) {
			dfs(i);
			cnt++;
		}
	}
	return cnt;
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	cout << dfs(1);
}