#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,a,b;
  cin>>n>>a>>b;
    int ans = 0;
  //start>=a , end<=b
    for(int i=a+1;i<=n;i++){
        if((n-i)<=b) ans++;
    }
    cout<<ans<<endl;
}
