#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    uint32_t nums[3]{};

    while (N--)
    {
        cin >> nums[0];
        if (nums[0] > nums[1])
            nums[2] = nums[1], nums[1] = nums[0];
        else if (nums[0] > nums[2])
            nums[2] = nums[0];
    }

    cout << nums[2] << endl;
    return 0;
}