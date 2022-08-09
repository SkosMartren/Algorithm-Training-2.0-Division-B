#include<iostream>

using namespace std;

int main() {

	// input and solution
	int N;
	cin >> N;
	size_t max_count_diploma = 0;
	size_t all_spent_time = 0;

	for (int i = 0; i < N; ++i) {

		size_t a_i;
		cin >> a_i;

		all_spent_time += a_i;
		if (max_count_diploma < a_i) {
			max_count_diploma = a_i;
		}
	}

	// output
	cout << all_spent_time - max_count_diploma;
	return 0;
}
