#include <iostream>
#include <string_view>
#include <algorithm>
#include <ranges>
using namespace std;

constexpr size_t maxn{40};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char board[maxn][maxn];
    int n, m, k;
    cin >> n >> m >> k;

    for (auto &line : board | views::take(n))
        for (auto &c : line | views::take(m))
            c = '.';

    while (k--)
    {
        int a, b;
        char c, d;
        cin >> a >> b >> c >> d;
        --a, --b;
        auto dye = [c](auto v)
        {
            for (auto &i : v)
                i = c;
        };
        auto subsc = [b](auto &&x) -> decltype(auto)
        { return x[b]; };
        if (d == 'R')
            dye(board[a] | views::take(m) | views::drop(b));
        else if (d == 'L')
            dye(board[a] | views::take(b + 1));
        else if (d == 'U')
            dye(views::transform(board | views::take(a + 1), subsc));
        else
            dye(views::transform(board | views::take(n) | views::drop(a), subsc));
    }

    for (auto const &line : board | views::take(n))
        cout << string_view(line | views::take(m)) << endl;
    return 0;
}