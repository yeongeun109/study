#include <iostream>
#include <vector>
using namespace std;

int main() {
	for (int l = 0; l < 10; l++) {
		int T;
		cin >> T;
		int n = T;
		vector <int> num;
		int cnt = 0;
		int min = 100, max = 0;
		for (int i = 0; i < 100; i++) {
			int a;
			cin >> a;
			num.push_back(a);

			if (a > max)
				max = a;
			if (a < min)
				min = a;
			int imax = 0, imin = 0;
			if (i == 99) {
				for (int j = 0; j < n; j++) {
					bool maxflag = false, minflag = false;
					for (int k = 0; k < 100; k++) {
						if (num[k] >= max) {
							max = num[k];
							imax = k;
						}

						if (num[k] <= min) {
							min = num[k];
							imin = k;
						}
					}
					num[imax]--;
					num[imin]++;
					for (int k = 0; k < 100; k++) {
						if (num[k] == max)
							maxflag = true;
						if (num[k] == min)
							minflag = true;
					}
					if (maxflag == false)
						max--;
					if (minflag == false)
						min++;
				}
			}
		}
		for (int j = 0; j < 100; j++) {
			if (num[j] > max)
				max = num[j];
			if (num[j] < min)
				min = num[j];
		}
		cout << '#' << l+1 << ' ' << max-min << endl;
	}
}