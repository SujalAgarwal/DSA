#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
    int t;
    cin>>t;
    int ans=0;
    int p=0;
    int remainder=0;
     for (int i = 0; i <11; i++)
     {
         remainder = t % 10;
        ans=ans+(remainder*pow(2,p));
     
        p++;
        t = t / 10;
     }
     
     
    
    cout<<ans<<endl;
    return 0;
}