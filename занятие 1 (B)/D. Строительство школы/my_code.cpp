#include<iostream> 

using namespace std;

int main() {

	// input
	int N;
	cin >> N;

	for (int i = 0, good_idx = 0; i < N; ++i, ++good_idx) { // language construction test
	// for (int i = 0, int good_idx = 0; i < N; ++i, ++good_idx) { // error!
		int coordinates_house;
		cin >> coordinates_house;

		// solution and output
		if (good_idx == N / 2) {
			cout << coordinates_house;
			return 0;
		}		
	}

}
/*
#include<iostream> 

using namespace std;

int main() {

	// input
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		int coordinates_house;
		cin >> coordinates_house;

		// solution and output
		if (i == N / 2) {
			cout << coordinates_house;
			return 0;
		}		
	}

}
*/
