#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int student;
		double sum = 0;
		double avg = 0;
		vector<int> arr;

		cin >> student;
		for (int j = 0; j < student; j++) {
			int score;
			cin >> score;
			arr.push_back(score);
			sum += score;
		}

		avg = sum / student;
		
		int over_student = 0;

		for (int j = 0; j < student; j++) {
			if (arr[j] > avg)
				over_student++;
		}

		double res = (double)over_student / (double)student * 100;
		cout << fixed;
		cout.precision(3);
		cout << res << '%' << endl;
	}
}