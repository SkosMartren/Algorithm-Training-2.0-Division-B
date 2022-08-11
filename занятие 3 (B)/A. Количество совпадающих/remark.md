Данный код

```objectivec
#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int main() {

    // input and solution
    unordered_set <string> all_numbers;
    string number;
    size_t count_numbers = 0;

    while (cin.peek() != '\n') {
        cin >> number;
        ++count_numbers;
        all_numbers.insert(number);
    }

    string garbage;
    cin >> garbage;

    while (cin.peek() != '\n') {
        cin >> number;
        ++count_numbers;
        all_numbers.insert(number);
    }

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

