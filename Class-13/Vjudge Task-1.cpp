///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const int mx = 1e5+123;
int a[mx];

int main()
{
    optimize();

    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) cin >> a[i];

    vector<pair<int, int>> v;

    v.push_back({ 1, a[0]});
    for ( int i = 1; i < n; i++ ) {
        v.push_back( { v[i-1].second+1, v[i-1].second + a[i] } );
    }

    int q;
    cin >> q;

    while ( q-- ) {
        int m;
        cin >> m;

        int l = 0, r = n-1;
        int ans;

        while ( l <= r ) {
            int mid = ( l + r ) / 2;

            if ( v[mid].first <= m && m <= v[mid].second ) {
                ans = mid;
                break;
            }

            if ( m < v[mid].first ) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }

        cout << ans+1 << endl;
    }

    return 0;
}












