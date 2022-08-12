
#include<iostream>
#include<unordered_set>

using namespace std;

int main() {

  unordered_set <int> set_numbers;

  while (cin.peek() != '\n') {

    int number;
    cin >> number;

    if (set_numbers.count(number)) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
      set_numbers.insert(number);
    }

  }

  return 0;
}
