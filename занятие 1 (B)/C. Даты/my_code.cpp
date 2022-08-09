#include<iostream>

using namespace std;

// solution
bool check_first_second(const int first, const int second) {
	return ((first <= 12) && (12 < second || first == second));
}

int main() {

	// input
	int first, second;
	cin >> first >> second; // можно не до конца считать данные, так как анализировать год не смысла ввиду ограничений на него

	// output
	if (check_first_second(first, second) || check_first_second(second, first)) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}
