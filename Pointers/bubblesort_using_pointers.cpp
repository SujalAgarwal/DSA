#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
void bubblesort(int *a,int n)
{
 for (int i = 0; i <n; i++)
 {
    for (int j = 0; j <n-i-1; j++)
    {
        if (*(a+j)>*(a+j+1))
        {
            swap(*(a+j),*(a+j+1));
        }
        
    }
    
 }
 for (int i = 0; i <n; i++)
 {
    cout<<*(a+i)<<" ";
 }
 
 
}
int32_t main()
{
    fio;
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i <t; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,t);
}