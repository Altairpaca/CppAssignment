#include <iostream>
#include <string_view>
#include <algorithm>
using namespace std;

constexpr size_t maxn{40};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char board[maxn][maxn];
    int n, m, k;
    cin >> n >> m >> k;

    for (int i{0}; i < n; ++i)
        for (int j{0}; j < m; ++j)
            board[i][j] = '.';

    while (k--)
    {
        int a, b;
        char c, d;
        cin >> a >> b >> c >> d;
        if (d == 'R')
            for (int i{b - 1}; i < m; ++i)
                board[a - 1][i] = c;
        else if (d == 'L')
            for (int i{0}; i < b; ++i)
                board[a - 1][i] = c;
        else if (d == 'U')
            for (int i{0}; i < a; ++i)
                board[i][b - 1] = c;
        else
            for (int i{a - 1}; i < n; ++i)
                board[i][b - 1] = c;
    }

    for (int i{0}; i < n; ++i, cout << endl)
        for (int j{0}; j < m; ++j)
            cout << board[i][j];

    return 0;
}