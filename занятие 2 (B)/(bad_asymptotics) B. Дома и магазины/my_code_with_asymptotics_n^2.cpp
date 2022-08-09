#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {

	const size_t count_building = 10;

	vector<int> shops; // 2
	vector<int> residential_buildings; // 1

	for (int i = 0; i < count_building; ++i) {
		int building;
		cin >> building;

		if (building == 2) {
			shops.push_back(i);
		}

		if (building == 1) {
			residential_buildings.push_back(i);
		}

	}

	int ans = -1;;
	for (const auto res_build : residential_buildings) {
		int max_dist_from_min = 11;
		for (const auto shop : shops) {

			if (abs(shop - res_build) < max_dist_from_min) {
				max_dist_from_min = abs(shop - res_build);
			}

		}

		if (ans < max_dist_from_min) {
			ans = max_dist_from_min;
		}
	}

	cout << ans;
	return 0;
}
/*
Вместо вектора можно использовать unordered_set, но это не рекомендуется, так как вектор - это просто массив, в нем подряд в памяти данные лежат.  
А хеш-таблица - это там корзины и т.д. Очевидно, что константа у хеш-таблиц будет больше
*/
