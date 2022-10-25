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
    string s, s1 = "hello";
    cin >> s;
    int j = 0, pas = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s1[j])
        {
            j++;
            pas++;
            if (pas == 5)
                break;
        }
    }
    if (pas == 5)cout << "YES";
    else cout << "NO";
}
