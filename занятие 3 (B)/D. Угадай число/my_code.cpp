#include<iostream>
#include<set>
#include<unordered_set>
#include<sstream>

using namespace std;

int main() {

	// input and solution
	size_t N;
	cin >> N;

	/*
Slava Muravjev, [8/12/2022 8:10 PM]
все работает закономерно ты считал N и находишься в конце первой строки вызываешь getline

дима, [8/12/2022 8:10 PM]
И считываешь пустоту

Slava Muravjev, [8/12/2022 8:10 PM]
и он дочитывает первую строчку

дима, [8/12/2022 8:10 PM]
И уже переходишь на вторую

Slava Muravjev, [8/12/2022 8:10 PM]
да
	*/

	string garbage;
	getline(cin, garbage);

	unordered_set < size_t> ans;
	for (size_t i = 1; i < N + 1; ++i) {
		ans.insert(i);
	}

	while (true) {

		string Beatrice_request;
		getline(cin, Beatrice_request);

		if (Beatrice_request == "HELP") {
			break;
		}

		stringstream Beatrice(Beatrice_request);
		unordered_set < size_t> Beatrice_numbers;
		size_t x;
		while (Beatrice >> x) {
			Beatrice_numbers.insert(x);
		}

		string August_answer;
		getline(cin, August_answer);

		if (August_answer == "YES") { // удаляем все элементы из ans, которые не указаны в Beatrice_numbers <-> пересечение: ans = ans & Beatrice_numbers

			unordered_set < size_t> intermediate_ans;

			for (const auto x : ans) {
				if (Beatrice_numbers.count(x)) {
					intermediate_ans.insert(x);
				}
			}

			ans = intermediate_ans;
		}

		if (August_answer == "NO") { // удаляем все элементы из ans, которые указаны в Beatrice_numbers <-> разность множеств:  ans = ans \ Beatrice_numbers
			for (auto x : Beatrice_numbers) {
				ans.erase(x);
			}
		}

	}

	set < size_t> sort_ans = { ans.begin(), ans.end() };

	// output
	for (size_t number : sort_ans) {
		cout << number << ' ';
	}

}
