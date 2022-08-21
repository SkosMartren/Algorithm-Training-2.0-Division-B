#include<iostream>
#include<cmath> // abs
#include<algorithm> // min max

using namespace std;

int main() {

	// input
	int N, i, j;
	cin >> N >> i >> j;

	// solution
	int path_through_station_N = N - max(i, j) + min(i, j) - 1; // == N - abs(i - j) - 1
	int path_not_through_station_N = abs(i - j) - 1;

	// output
	cout << min( path_through_station_N,path_not_through_station_N);
	return 0;
}
