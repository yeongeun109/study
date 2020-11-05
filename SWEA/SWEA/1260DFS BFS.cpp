#include <iostream>
#include <queue>

using namespace std;

int arr[1001][1001] = { 0 };
bool visited[1001];
queue<int> q;

void dfs(int a) {
	visited[a] = true;
	cout << a << ' ';
	for (int i = 0; i < 1001; i++) {
		if (arr[a][i] == 1 && visited[i] != true) {
			dfs(i);
		}
	}
}

void bfs(int a) {
	visited[a] = true;
	q.push(a);
	cout << a << ' ';
	while (q.empty() != true) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < 1001; i++) {
			if (arr[x][i] == 1 && visited[i] == false) {
				q.push(i);
				visited[i] = true;
				cout << i << ' ';
			}
		}
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	dfs(V);
	cout << endl;

	for (int i = 0; i < 1001; i++) {
		visited[i] = false;
	}

	bfs(V);
}

