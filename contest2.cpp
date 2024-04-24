#include <bits/stdc++.h>

using namespace std;

int main()
{
    int aus;
    cin >> aus;
    while (aus--)
    {
        int n;
        cin >> n;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s = "";
            for (int j = 0; j < n; j++)
            {
                s += (i + j) % 2 == 0 ? "##" : "..";
            }
            cout << s << endl;
            cout << s << endl;  
        }
    }
    return 0;
}