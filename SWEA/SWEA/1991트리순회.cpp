#include <iostream>

using namespace std;

struct node {
	char left;
	char right;
};

struct node arr[100];

int n;

void preOrder(char root) {
	if (root == '.') {
		return;
	}
	cout << root;
	preOrder(arr[root].left);
	preOrder(arr[root].right);
}

void inOrder(char root) {
	if (root == '.') {
		return;
	}
	inOrder(arr[root].left);
	cout << root;
	inOrder(arr[root].right);
}

void postOrder(char root) {
	if (root == '.') {
		return;
	}
	postOrder(arr[root].left);
	postOrder(arr[root].right);
	cout << root;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		arr[a].left = b;
		arr[a].right = c;
	}
	
	preOrder('A');
	cout << endl;
	inOrder('A');
	cout << endl;
	postOrder('A');
}