#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main() {

	// input
	int n, q;
	cin >> n >> q;
	vector <int64_t> A(n);

	for (auto& a_i : A) {
		cin >> a_i;
	}

	// solution
	vector <int64_t> prefix_sum(n + 1, 0);
	for (int i = 1; i < n + 1; ++i) {
		prefix_sum[i] = prefix_sum[i - 1] + A[i - 1];
	}

	for (int j = 0; j < q; ++j) {
		int l, r;
		cin >> l >> r;
		int64_t ans = prefix_sum[r]- prefix_sum[l-1];

		// output
		cout << ans << '\n';
	}

	return 0;
}
