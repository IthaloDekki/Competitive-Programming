#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> v;

        for (int i = 0; i < 3; i++)
        {
            int a;
            scanf("%d", &a);
            v.push_back(a);
        }

        if (v[0] < v[1] && v[1] < v[2])
        {
            cout << "STAIR" << endl;
        }
        else if (v[0] < v[1] && v[1] > v[2])
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
        v.clear();
    }
    return 0;
}