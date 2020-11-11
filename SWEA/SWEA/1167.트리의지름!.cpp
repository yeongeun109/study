#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int resDis = 0;
int resNode = 0;
bool visited[100001];
vector<pair<int, int>> arr[100001];

void DFS(int node, int cost) {
	if (visited[node] == true)
		return;

	visited[node] = true;

	if (resDis < cost) {
		resDis = cost;
		resNode = node;
	}

	for (int i = 0; i < arr[node].size(); i++) {
		DFS(arr[node][i].first, cost + arr[node][i].second);
	}
}

int main() {
	int n;
	cin.tie();
	cin >> n;
	for (int i = 0; i < n; i++) {
		int node;
		cin >> node;

		while (true) {
			int node2, distance;
			cin >> node2;

			if (node2 == -1) {
				break;
			}

			cin >> distance;

			arr[node].push_back({ node2, distance });
		}
	}

	memset(visited, false, 100001);
	DFS(1, 0);

	memset(visited, false, 100001);
	DFS(resNode, 0);
	cout << resDis;
}