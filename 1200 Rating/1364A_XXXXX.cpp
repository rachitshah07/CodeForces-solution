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
     w(t){
        int n,x;
        cin>>n>>x;
        int c=0,y=0,k=0;
        ll sum = 0;
        for(int i=0;i<n;i++) {
           int a;
           cin>>a;
            sum += a;
            if(!(a%x)) c++;
          //first element not divisible
            if(!k)     
                if(a%x)  
                    k=i+1; 
          //last element not divisible 
            if(a%x) 
                y=i;
        }
       //all elements multiple of "x"
        if(c==n) {
            cout<<"-1\n";
            continue;
        }
       //sum not a multiple of "x"
        if(sum%x) {cout<<n<<endl; continue;}
       
        cout<<n-min(k,n-y) <<endl;
    }
}

