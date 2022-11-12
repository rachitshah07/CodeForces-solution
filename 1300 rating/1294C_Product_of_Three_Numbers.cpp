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

int main(){
    w(t){
        int n;
        cin>>n;        
        int f=0;
        for(int i=2;i*i<=n;i++){
            if(!(n%i)) {
                int d = n/i;
                for (int j=i+1; j*j<d; j++)
                {
                if (!(d % j))
                    {
                        f=1;
                        cout<<"YES\n";
                        cout<<i<<" "<<j<<" "<<d/j<<endl;
                        break;
                    }
                }
               
            }
             if(f) break;
        }
        if(f) continue;
         cout<<"NO\n";
    }
}
