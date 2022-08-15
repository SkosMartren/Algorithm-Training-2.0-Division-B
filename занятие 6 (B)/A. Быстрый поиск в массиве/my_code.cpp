#include<iostream>
#include<vector>
#include<algorithm> // sort

using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> numbers(N);

	for (auto& number : numbers) {
		cin >> number;
	}
	sort(numbers.begin(), numbers.end());


	int K;
	cin >> K;

	for (int i = 0; i < K; ++i) {
		int L, R;
		cin >> L >> R;
		const auto l = lower_bound(numbers.begin(), numbers.end(), L);
		const auto r = upper_bound(numbers.begin(), numbers.end(), R);
		cout << (r - l) << ' ';
	}

	return 0;
}
