#include<iostream>
#include<map>

using namespace std;

int main() {

	// input and solution
	string second_name;
	int number_votes;
	map<string, int64_t> second_name_to_number_votes;
	while (cin >> second_name >> number_votes) {
		second_name_to_number_votes[second_name] += number_votes;
	}

	// output: "... в лексикографическом порядке ..."
	for (const auto& [second_name, number_votes] : second_name_to_number_votes) {
		cout << second_name << ' ' << number_votes << '\n';
	}

	return 0;
}
