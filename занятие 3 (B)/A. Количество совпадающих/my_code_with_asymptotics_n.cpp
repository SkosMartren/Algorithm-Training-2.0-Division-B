#include<iostream>
#include<unordered_set> // unordered_set
#include<string> // getline
#include <sstream> // stringstream

using namespace std;

void Read_Number(unordered_set <int>& first) {

	string input_first;
	getline(cin, input_first);
	stringstream ss_first(input_first);
	int number;

	while (ss_first >> number) {
		first.insert(number);
	}
}

int main() {

	unordered_set <int> first;
	unordered_set <int> second;
	
	Read_Number(first);
	Read_Number(second);

	size_t size_set_intersection = 0;

	for (const auto x: first) { // O(first.size())
		if (second.count(x)) { // O(1)
			++size_set_intersection;
		}
	}

	cout << size_set_intersection;

	return 0;
}
