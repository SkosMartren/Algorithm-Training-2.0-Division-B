#include<iostream>

using namespace std;

int main() {

	// input and solution
	int max_value = -1;
	int count_max_value = 1;
	int n = -1; // int n; // error!
	while (n != 0) {
		cin >> n;
		if (max_value < n) {
			max_value = n;
			count_max_value = 1;
		}
		else if (max_value == n) {
			count_max_value += 1;
		}

	}

	// output
	cout << count_max_value;
	return 0;
}
