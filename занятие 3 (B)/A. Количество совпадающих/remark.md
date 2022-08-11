Данный код

```objectivec
#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

void ReadNumbers(size_t& count_numbers, unordered_set <string>& all_numbers) {
    while (cin.peek() != '\n') {
        string number;
        cin >> number;
        ++count_numbers;
        all_numbers.insert(number);
    }
}

int main() {

    // input and solution
    unordered_set <string> all_numbers;
    size_t count_numbers = 0;

    ReadNumbers(count_numbers, all_numbers);
    string garbage;
    cin >> garbage;
    ReadNumbers(count_numbers, all_numbers);

    // output
    cout << count_numbers - all_numbers.size();
    return 0;
}
```

 решает подзадачу:  
 Даны два списка чисел, **каждый список не содержит повторяющиеся числа**, которые могут содержать до 100000 чисел каждый...
 
То есть для  
1 2 3  
2 3 4  
вывод верный — 2


В то время как для  
1 2 2  
2 2 4  
Вывод не верный — 2

\
Данное решение предоставленно ввиду того, что оно проще решения исходный задачи и алгоритм решения отличается, 
