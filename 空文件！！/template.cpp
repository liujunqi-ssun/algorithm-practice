#include <cstring>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <cmath>
#define gkd ios::sync_with_stdio(0), cin.tie(0)
#define inf 0x3f3f3f3f
#define fi first
#define se second
#define sz(a) (int)a.size()
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 1e5 + 10, M = 1e5 + 10;
int n, m;
int h[N], ne[N], e[N], idx;
void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int main()
{
    gkd;
    cin >> n >> m;
    cout << n + m;
    return 0;
}