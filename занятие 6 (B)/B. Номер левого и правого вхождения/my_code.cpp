#include<iostream> 
#include<vector> 
#include<algorithm> // lower_bound upper_bound

using namespace std;

int main() {

	// input
	int N;
	cin >> N;

	vector<int> natural_numbers(N);

	for (auto& natural_number : natural_numbers) {
		cin >> natural_number;
	}

	int M;
	cin >> M;

	for (int j = 0; j < M; ++j) {
		int find_idx_number;
		cin >> find_idx_number;

		// solution
		const auto low = lower_bound(natural_numbers.begin(), natural_numbers.end(), find_idx_number);
		const auto up = upper_bound(natural_numbers.begin(), natural_numbers.end(), find_idx_number);
		const auto start = natural_numbers.begin();
		
		// output
		if (low == natural_numbers.end() || *low != find_idx_number) {
			cout << 0 << ' ' << 0 << '\n';
		}
		else {
			cout << (low - start + 1) << ' ' << (up - start) << '\n';
		}

	}

	return 0;
}
