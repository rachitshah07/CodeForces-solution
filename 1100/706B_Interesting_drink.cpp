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
#define vi vector<ll>
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
   int n;
   cin>>n;
// //    vi a(n,0);
//    vi freq(1e5+1,0);
//    for(int i=0;i<n;i++){
//        int x;
//        cin>>x;
//        //frequency of ith element on ith position
//        freq[x]++;
//    }
//    vi pre(1e5+1,0);
//     for(int i=1;i<=(1e5);i++){
//         pre[i] = pre[i-1] + freq[i];
//     }
//    int q;
//    cin>>q;
//    while(q--){
//        int x;
//        cin>>x;
//        if(x>1e5) cout<<n<<endl;
//        else cout<<pre[x]<<endl;
//    }
    int q;
    vi a(n,0);
    fov(x,a);
    sort(all(a));
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        auto ans = upper_bound(all(a),x) - a.begin();
        cout<<ans<<endl;
    }
}
    
