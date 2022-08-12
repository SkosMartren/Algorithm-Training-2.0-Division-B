#include<iostream>
#include<unordered_map>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main() {

	// input
	vector<int> start_order;
	unordered_map<int, int> element_to_count;
	int x;
	string start_numbers;
	getline(cin, start_numbers);
	stringstream numbers (start_numbers);

	while (numbers >> x) {
		++element_to_count[x];
		start_order.push_back(x);
	}

	// solution and output: "Элементы нужно выводить в том порядке, в котором они встречаются в списке."
	for (const auto& element : start_order) {
		if (element_to_count[element] == 1) {
			cout << element << ' ';
		}
	}

	return 0;
}
