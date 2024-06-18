#include <bits/stdc++.h>
using namespace std;

pair<string, string> swap_first_char(string a, string b)
{
    swap(a[0], b[0]);

    return make_pair(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        pair<string, string> ans = swap_first_char(a, b);

        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}