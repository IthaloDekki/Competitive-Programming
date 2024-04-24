#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, aux;
    vector<int> v;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    aux = 0;

    if (v[0])
        aux++;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] && v[i - 1] != v[i])
        {
            aux++;
        }
    }

    printf("%d\n", aux);
    return 0;
}