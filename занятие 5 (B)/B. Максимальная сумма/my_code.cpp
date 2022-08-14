#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	// input
	int n;
	cin >> n;
	vector <int64_t> A(n);

	for (auto& a_i : A) {
		cin >> a_i;
	}

	// solution
	vector <int64_t> prefix_sum(n + 1, 0);
	for (int i = 1; i < n + 1; ++i) {
		prefix_sum[i] = prefix_sum[i - 1] + A[i - 1];
	}
	
	int64_t min_prefix_sum = 0;
	int64_t ans = prefix_sum[1];

	for (int i = 1; i < n + 1; ++i) {

		ans = max(ans, prefix_sum[i] - min_prefix_sum);
		min_prefix_sum = min(min_prefix_sum, prefix_sum[i]);
	}


	// output
	cout << ans;
	return 0;
}
