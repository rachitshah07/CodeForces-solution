#include <bits/stdc++.h>
using namespace std;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
 
#define fastread()                                     \
    (ios_base::sync_with_stdio(false), cin.tie(NULL)); \
    cout.tie(NULL);
int main()
{
    fastread();
    w(t)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>>grid(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) 
                cin>>grid[i][j];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                //all squares of size 2×2 
                //there cannot be exactly 3 filled cells in each of them.
                int count = grid[i][j]-'0' + grid[i][j + 1]-'0' + grid[i + 1][j]-'0' + grid[i + 1][j + 1]-'0';
                if(count==3) {flag = false; break;}
            }
        }
        // cout<<count<<endl;
        if(!flag) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}
