#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

int m = 0, c = 0;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        ++m;
    else if (a < b)
        ++c;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    if (m > c)
        cout << "Mishka";
    else if (m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}