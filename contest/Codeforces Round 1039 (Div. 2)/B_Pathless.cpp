#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        int n, m, q;
        cin >> n >> m;
        vector<int> v(3, 0);
        // for (int i = 0; i < n; i++)
        //     cin >> v[i];

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v[x]++;
        }

        if (sum > m)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < v[i]; j++)
                {
                    cout << i << ' ';
                }
            }
            cout << endl;
            continue;
        }

        if (m - sum != 1)
        {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < v[0]; i++)
            cout << 0 << ' ';
        for (int i = 0; i < v[2]; i++)
            cout << 2 << ' ';
        for (int i = 0; i < v[1]; i++)
            cout << 1 << ' ';
        cout << endl;
    }
}
