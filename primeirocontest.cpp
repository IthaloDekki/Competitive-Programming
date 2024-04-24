#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
        {
            printf("STAIRS\n");
        }
        else if (a < b && b > c)
        {
            printf("PEAK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }
    return 0;
}
