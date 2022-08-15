#include<iostream>

using namespace std;

int main() {

	// input
	string sequance_brackets;
	cin >> sequance_brackets;

	// solution
	int count = 0;
	for (const auto bracket : sequance_brackets) {
		if (bracket == '(') {
			++count;
		}
		else { // bracket == ')'
			--count;
		}

		if (count < 0) {
			cout << "NO";
			return 0;
		}

	}

	// output
	if (count == 0) {
		cout << "YES";
	}
	else { // count > 0
		cout << "NO";
	}
	return 0;
}
