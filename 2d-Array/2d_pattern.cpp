#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    fio;
    int r,c;
     cin>>r>>c;
    int a[r][c];
    

    int val=1;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]=val;
             val++;
        }
       
    }
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
         cout<<endl;
    }
    
}