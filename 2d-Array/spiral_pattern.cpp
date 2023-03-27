#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
void spiral_pattern(int n,int m,int a[][100])
{
  int sc=0; int ec=m-1;
  int sr=0; int er=n-1;
  while (ec>=sc and er>=sr) 
  {
    // 1)print sr from sc to ec.
  //   sr++
  for (int i = sc; i <=ec; i++)
  {
    cout<<a[sr][i]<<" ";
  }
  sr++;
  //2)print ec from sr to er
  //ec--
  for (int i = sr; i <=er; i++)
  {
    cout<<a[i][ec]<<" ";
  }
  ec--;
  //3)print er from ec to sc
  //er--
    for (int i = ec; i >=sc; i--)
    {
        cout<<a[er][i]<<" ";
    }
    er--;
  //4)print sc from er to sr
  //sc++
  for (int i = er; i >=sr; i--)
  {
    cout<<a[i][sc]<<" ";
  }
  sc++;
  }
  
  
}
int32_t main()
{
    fio;
    int a[100][100];
    int r,c;
    cin>>r>>c;
    int val=1;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            a[i][j]=val;
            val++;
        }
        
    }
    spiral_pattern(r,c,a);
    return 0;
}