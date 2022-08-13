#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm> // sort

using namespace std;

bool comp(const pair<int64_t, string>& x, const pair<int64_t, string>& y) {
	if (x.first == y.first) {
		return x.second < y.second;
	}
	return x.first > y.first;
}

int main() {

	// input and solution
	string word;
	unordered_map<string, int64_t> word_to_count;
	while (cin >> word) {
		++word_to_count[word];
	}

	vector<pair<int64_t, string>> count_to_word;
	for (const auto& [word, count] : word_to_count) {
		count_to_word.push_back({ count , word });
	}

	sort(count_to_word.begin(), count_to_word.end(), comp);

	// output: 
	for (const auto& [count,word] : count_to_word) {
		cout << word << '\n';
	}

	return 0;
}
