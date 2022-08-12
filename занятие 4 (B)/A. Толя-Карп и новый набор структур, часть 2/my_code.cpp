#include<iostream>
#include<map>

using namespace std;

int main() {

	// input and solution
	int n;
	cin >> n;
	map<int64_t, int64_t> colour_number_to_value_number;

	for (int i = 0; i < n; ++i) {
		int64_t d_i, a_i;
		cin >> d_i >> a_i;
		colour_number_to_value_number[d_i] += a_i;
	}

	// output: "Выведите в порядке возрастания"
	for (const auto& [colour_number, value_number] : colour_number_to_value_number) {
		cout << colour_number << ' ' << value_number << '\n';
	}

	return 0;
}
