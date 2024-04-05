#include <iostream>
#include <cstring>
#include <algorithm>
#define inf 0x3f3f3f3f
using namespace std;
const int N = 1e5 + 10, M = 1e5 + 10;
int n, m;
int a[N];
void solve()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        if (s == "1")
            puts("2");
        else
            puts("1");
        return;
    }
    int num = 0;
    for (auto &x : s)
    {
        if (x == '0')
            x = 1;
        else
            x = 0;
        num *= 10;
        num += x;
    }

    cout << num << endl;
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}