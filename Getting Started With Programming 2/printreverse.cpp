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
    int count=0;
    int reverse=0;
    int x=t;
     while (x % 10 != 0)
    {
        count++;
        x = x / 10;
    
    }
        
    count--;
     while (t % 10 != 0)
    {
        p=t%10;
        reverse=reverse+(p*pow(10,count));
        t = t / 10;
        count--;
        
    }
    cout<<reverse<<endl;

    return 0;
}