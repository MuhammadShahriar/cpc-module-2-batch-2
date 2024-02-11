
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

int main()
{
    optimize();

    int T;
    cin >> T;

    for ( int tc = 1; tc <= T; tc++ ) {
        dl AB, AC, BC, R;
        cin >> AB >> AC >> BC >> R;


        dl l = 0,  r = AB;

        for ( int i = 0; i < 60; i++ ) {
            dl mid = ( r + l ) / 2;

            dl AD = mid;
            dl AE = ( AD * AC ) / AB;
            dl DE = ( AD * BC ) / AB;

            dl sADE = ( AD + AE + DE ) / 2;
            dl sABC = ( AB + AC + BC ) / 2;

            dl aADE = sqrt ( sADE * ( sADE - AD ) * ( sADE - AE ) * ( sADE - DE ) );
            dl aABC = sqrt ( sABC * ( sABC - AB ) * ( sABC - AC ) * ( sABC - BC ) );

            dl aBDEC = aABC - aADE;

            dl R1 = aADE / aBDEC;

            if ( R1 < R ) {
                l = mid;
            }
            else {
                r = mid;
            }
        }

        fraction();
        cout << "Case " << tc << ": " << l << endl;
    }

    return 0;
}














