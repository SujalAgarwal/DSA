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
    int a, b;
    char c;
    cin >> c;

    while (1)
    {
        switch (c)
        {
        case 'x':
        case 'X':
            break;

        case '+':
            cin >> a >> b;
            cout << a + b << endl;
            break;
        case '-':
            cin >> a >> b;
            cout << a - b << endl;
            break;
        case '*':
            cin >> a >> b;
            cout << a * b << endl;
            break;
        case '/':
            cin >> a >> b;
            cout << a / b << endl;
            break;
        case '%':
            cin >> a >> b;
            cout << a % b << endl;
            break;

        default:
            cout << "Invalid operation. Try again." << endl;
            break;
        }
        cin>>c;
    }

    return 0;
}