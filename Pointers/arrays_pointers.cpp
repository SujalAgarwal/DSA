#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    int a[5];
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<*(a+i)<<" ";
    }
    return 0;
}