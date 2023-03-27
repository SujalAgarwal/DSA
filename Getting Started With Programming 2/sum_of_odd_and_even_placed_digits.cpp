#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
    int t;
    cin >> t;
    int p = 1;
    int even = 0;
    int odd = 0;
    int remainder = 0;
    while (t % 10 != 0)
    {
        remainder = t % 10;
        if (p % 2 == 0)
        {
            even = even + remainder;
        }
        else if (p % 2 != 0)
        {
            odd = odd + remainder;
        }
        p++;
        t = t / 10;
    }
    cout << odd << endl;
    cout << even << endl;
    return 0;
}