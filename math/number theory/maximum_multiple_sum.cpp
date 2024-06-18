#include <bits/stdc++.h>
using namespace std;

int max_multiple(int n)
{
    int maxi = INT_MIN;
    int value;
    for (int i = 2; i <= n; i++)
    {
        int j = 1;
        int sum = 0;
        while (j * i <= n)
        {
            sum += j * i;
            j++;
        }
        if (sum > maxi)
        {
            maxi = sum;
            value = i;
        }
    }
    return value;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = max_multiple(n);
        cout << ans << endl;
    }

    return 0;
}