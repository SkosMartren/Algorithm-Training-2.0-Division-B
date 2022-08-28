#include<iostream>
#include<vector>
#include<algorithm> // sort lower_bound upper_bound

using namespace std;

int main() {

	// input
	int n, m;
	cin >> n >> m;

	vector <int> points_with_little_perfect_kittens(n);
	for (auto& point_with_little_cats : points_with_little_perfect_kittens) {
		cin >> point_with_little_cats;
	}

	vector<pair<int, int>> segments(m);
	for (auto& [l, r] : segments) {
		cin >> l >> r;
	}

	// solution
	auto itr_on_first_kittens = points_with_little_perfect_kittens.begin();
	auto itr_on_last_kittens = points_with_little_perfect_kittens.end();

	sort(itr_on_first_kittens, itr_on_last_kittens);

	for (const auto& [l, r] : segments) {
		auto it_first_kitten_on_segment_i = lower_bound(itr_on_first_kittens, itr_on_last_kittens, l);
		auto it_last_kitten_on_segment_i = upper_bound(itr_on_first_kittens, itr_on_last_kittens, r);

	// output
		cout << it_last_kitten_on_segment_i - it_first_kitten_on_segment_i << '\n';
	}
	
	return 0;
}
