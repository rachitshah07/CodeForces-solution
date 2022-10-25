#include <bits/stdc++.h>
using namespace std;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ll long long int
#define MOD 1000000007
#define sz(x) ((int)(x).size())
#define pii pair<int, int>
#define vi vector<int>
#define fov(x,a) for(auto &x:a) cin>>x
#define vii vector<vector<int>>
#define vpp vector<pair<int,pii>>
#define adj map<int,vector<int>> 
#define vp vector<pii>
#define vb vector<bool>
#define ff first
#define ss second
#define mii map<ll, ll>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rev(s) reverse(s.begin(),s.end())
#define mini(a) *min_element(all(a))
#define maxi(a) *max_element(all(a))
#define lower(s) transform(s.begin(),s.end(), s.begin(), ::tolower)
#define pb push_back
#define INF 0x3f3f3f3f3f3f3f3f //to be approximately a 19-bit value.
#define fastread()                                     \
    (ios_base::sync_with_stdio(false), cin.tie(NULL)); \
    cout.tie(NULL)
int main()
{
    fastread();
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    
    sort(all(a));
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";
  //Finding a pattern for n=7 , n = 8 and then generalize for every testcase and playing with index as already sorted
  //n=8                       n=7
  //1 2 3 4 5 6 7 8           1 2 3 4 5 6 7 
  //output                    output
  //5 1 6 2 7 3 8 4           4 1 5 2 6 3 7
     if(!(n&1))
        cout<<(n/2) - 1<<endl;
    else 
        cout<<n/2<<endl;
  
    int j=0,k=n/2;
    for(int i=0;i<n;i++){
        if(i&1) cout<<" "<<a[j++]<<" ";
        else cout<<a[k++];
    }
       
}
