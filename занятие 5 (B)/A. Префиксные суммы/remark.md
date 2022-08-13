#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector <int> A(n);

	for (auto& a_i : A) {
		cin >> a_i;
	}

	for (int j = 0; j < q; ++j) {
		int l, r;
		cin >> l >> r;
		int64_t ans = 0;
		for (; l <= r;++l) {
			ans +=A[l-1];
			//cout << "error!"<< ans << ' ' << A[l - 1] << '\n';
		}
		cout << ans << '\n';
	}

	return 0;
}
