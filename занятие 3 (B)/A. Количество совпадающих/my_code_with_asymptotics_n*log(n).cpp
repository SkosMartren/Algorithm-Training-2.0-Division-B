#include<algorithm> // set_intersection //https://en.cppreference.com/w/cpp/algorithm/set_intersection
#include<iostream>
#include<set> // set
#include<string>
#include <iterator> // back_inserter
#include <sstream> // stringstream
#include<vector> // vector

using namespace std;

void Read_Number(set <int>& first) {

	string input_first;
	getline(cin, input_first);
	stringstream ss_first(input_first);
	int number;

	while (ss_first >> number) {
		first.insert(number);
	}
}

int main() {

	vector <int> intersection;
	set <int> first;
	set <int> second;
	
	Read_Number(first);
	Read_Number(second);

	set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(intersection));

	cout << intersection.size();

	return 0;
}
