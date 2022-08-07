#include<iostream>
#include<string>

using namespace std;

int main() {

	// input
	string almost_palindrome;
	cin >> almost_palindrome;

	// solution
	size_t count_different_char = 0;

	for (int j = 0; j < almost_palindrome.size() / 2; ++j) {
		if (almost_palindrome[j] != almost_palindrome[almost_palindrome.size() - 1 - j]) {
			++count_different_char;
		}
	}

	// output
	cout << count_different_char;
	return 0;
}
