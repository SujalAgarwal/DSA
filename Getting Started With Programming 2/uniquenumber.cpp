#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
    int t,p;
    cin>>t;
    int arr[t];
    int ans=0;
    for (int i = 0; i <t; i++)
    {
        cin>>arr[i];


    }
    for (int j = 0; j<t; j++)
    {
        ans=(arr[j]^ans);
    }
    cout<<ans<<endl;
    return 0;
}