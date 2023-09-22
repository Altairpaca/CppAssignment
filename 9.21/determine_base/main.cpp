#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char bufs[3][8]{};
    char *ptrs[3];
    int base{2};

    cin >> bufs[0] >> bufs[1] >> bufs[2];

    for (; base <= 16; ++base)
        if (strtol(bufs[0], &ptrs[0], base) * strtol(bufs[1], &ptrs[1], base) == strtol(bufs[2], &ptrs[2], base) && !(*ptrs[0] || *ptrs[1] || *ptrs[2]))
            break;

    cout << (base == 17 ? 0 : base) << endl;
}
