ошибка: OL, 9 тест
[EOF](https://ru.wikipedia.org/wiki/EOF)

```objectivec
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
```

Slava Muravjev, [8/12/2022 1:52 PM]
там в конце cin возвращает нули

Slava Muravjev, [8/12/2022 1:53 PM]
и никак не доходит до \n

Slava Muravjev, [8/12/2022 1:53 PM]
в каком-нибудь тесте

Slava Muravjev, [8/12/2022 1:53 PM]
а, ну я знаю, в чем дело

Slava Muravjev, [8/12/2022 1:53 PM]
там тест кривой, вероятно

Slava Muravjev, [8/12/2022 1:53 PM]
и нет в конце \n

Slava Muravjev, [8/12/2022 1:53 PM]
добавьте проверку на eof

Slava Muravjev, [8/12/2022 1:59 PM]
я думаю, что там косяк с тестом

Slava Muravjev, [8/12/2022 1:59 PM]
8 тесто ведь прошло

Slava Muravjev, [8/12/2022 1:59 PM]
значит ввод рабочий
