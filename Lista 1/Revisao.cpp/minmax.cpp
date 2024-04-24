#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, k, z;

    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cin >> k;

    while (k--)
    {
        cin >> z;
        auto it = upper_bound(v.begin(), v.end(), z);

        cout << it - v.begin() << '\n';
    }

    return 0;
}