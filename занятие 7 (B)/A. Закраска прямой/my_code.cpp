#include <algorithm> // sort
#include <iostream>
#include <vector>

using namespace std;

    // solution
struct event {
    int x, type;
};

int scanline(const vector<pair<int, int>>& segments) {
    vector<event> events;

    for (const auto& [l, r] : segments) {
        events.push_back({ l, 1 });
        events.push_back({ r, -1 });
    }

    sort(events.begin(), events.end(), [](const event& a, const event& b) {
        return (a.x < b.x || (a.x == b.x && a.type > b.type));
        });

    int cnt = 0, res = 0, prev = -1;

    for (const event& e : events) {
        if (prev != -1 && cnt > 0){
            res += e.x - prev; // весь отрезок [prev, e.x] покрыт cnt отрезками
        }
        cnt += e.type;
        prev = e.x;
    }

    return res;
}

int main() {

    // input
    int N;
    cin >> N;
    vector<pair<int, int>> segments(N);
    for (auto& [l, r] : segments) {
        cin >> l >> r;
    }

    // output
    cout << scanline(segments);
    return 0;
}
