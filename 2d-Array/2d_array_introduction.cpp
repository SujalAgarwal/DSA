#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}