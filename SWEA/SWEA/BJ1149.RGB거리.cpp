#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> vred;
	vector<int> vblue;
	vector<int> vgreen;

	for (int i = 0; i < N; i++) {
		int red, blue, green;
		cin >> red >> blue >> green;
		vred.push_back(red);
		vblue.push_back(blue);
		vgreen.push_back(green);
	}
	int min_first, sum = 0;
	char color;
	if (vred[0] < vblue[0]){
		min_first = vred[0];
		color = 'r';
		sum += vred[0];
	}
	else{
		min_first = vblue[0];
		color = 'b';
		sum += vblue[0];
	}

	if (vgreen[0] < min_first)
	{
		min_first = vgreen[0];
		color = 'g';
		sum += vgreen[0];
	}
	
	for (int i = 1; i < N; i++) {
		if (color == 'r'){
			if (vblue[i] < vgreen[i])
			{
				color = 'b';
				sum += vblue[i];
			}
			else {
				color = 'g';
				sum += vgreen[i];
			}
		}
		else if (color == 'b') {
			if (vred[i] < vgreen[i]) {
				color = 'r';
				sum += vred[i];
			}
			else {
				color = 'g';
				sum += vgreen[i];
			}
		}
		else {
			if (vred[i] < vblue[i]) {
				color = 'r';
				sum += vred[i];
			}
			else {
				color = 'b';
				sum += vblue[i];
			}
		}
	}

	cout << sum;
}