#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int sum{ 0 };
    for (int i = 0; i < 5; ++i)
    {
        int a;
        cin >> a;

        sum += a;
    }

    cout << sum;

    return 0;
}