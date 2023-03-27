#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}