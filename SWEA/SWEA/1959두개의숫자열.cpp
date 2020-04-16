#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M;
		int nnum = 0, mnum = 0, sum , max = 0, b, diff;
		cin >> N >> M;
		vector <int> A(N), B(M);
		for (int j = 0; j < N; j++) {
			cin >> A[j];
			nnum++;
		}
		for (int j = 0; j < M; j++) {
			cin >> B[j];
			mnum++;
		}

		if (nnum > mnum) {
			diff = nnum - mnum + 1;
			for (int j = 0; j < diff; j++) {
				sum = 0;
				b = j;
				for (int k = 0; k < mnum; k++) {
					sum += B[k] * A[b];
					b++;
				}
				if (sum > max)
					max = sum;
			}
		}
		else {
			diff = mnum - nnum + 1;
			for (int j = 0; j < diff; j++) {
				sum = 0;
				b = j;
				for (int k = 0; k < nnum; k++) {
					sum += A[k] * B[b];
					b++;
				}
				if (sum > max)
					max = sum;
			}
		}
		cout << '#' << i + 1 << ' ' << max << endl;
	}
	
}