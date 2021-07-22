//In c++
//by goku_11
/*
 Stickler the thief wants to loot money from a society having n houses in a single line. 
 He is a weird person and follows a certain rule when looting the houses. According to the rule, 
 he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. 
*/
#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb push_back
#define mp make_pair
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long int
#define llu unsigned long long int
#define pii pair<int, int>
#define MOD 1000000007
#define fi first
#define sec second
#define N NULL
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
void solve(int a[], int n)
{
    // Your code here
    int sum = 0;
    int ans[n];
    //memset(ans,0,sizeof(ans));
    ans[0] = a[0];
    ans[1] = max(a[1], ans[0]);
    for (int i = 2; i < n; i++)
    {
        ans[i] = max(ans[i - 1], ans[i - 2] + a[i]);
    }
    cout << "ans=" << ans[n - 1] << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> vec;
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        solve(a, n);
    }
}