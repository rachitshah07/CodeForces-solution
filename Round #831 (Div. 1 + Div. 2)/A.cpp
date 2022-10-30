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
const int N = 1e5+10;
vector<int> prime(N,1);
void SieveOfEratosthenes()
{
    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == 1) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = 0;
        }
    }
}

int main()
{
  SieveOfEratosthenes();
  w(t){
    int n;
    cin>>n;
    int c = n + 2 , c1 = n + 7;
    prime[n] = 3;
    if(!prime[c] && prime[2]!=3) cout<<2<<endl;
    else if(!prime[c1] && prime[7]!=3) cout<<7<<endl;
    prime[n]=1;
  }
}
 
