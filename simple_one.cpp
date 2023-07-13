#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;typedef unsigned long long int ull;typedef long double ld;
typedef pair<int, int> pii;typedef pair<ll,ll> pll;
typedef vector<int> vi;typedef vector<ll> vll;typedef vector<pii> vpii;typedef vector<pll> vpll;typedef vector<vi> vvi;typedef vector<vll> vvll;
#define test(t)             int t; cin >> t; while(t--)
#define f(i, a, b)          for(int (i) = (a); (i) < (b); ++(i))
#define each(it,arr)        for(auto it : arr)
#define all(x)              x.begin(), x.end()
#define ff first 
#define ss second 
#define pb push_back 
#define mp make_pair
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define rev(ds) reverse(all(ds))
#define tsum(ds) (accumulate(all(ds), 0ll))
#define ctx(ds, x) (count(all(ds), (x)))
#define sz(ds) ((ll)(ds).size())
#define mine(ds) (*min_element(all(ds)))
#define maxe(ds) (*max_element(all(ds)))
#define minei(ds) (min_element(all(ds)) - (ds).begin())
#define maxei(ds) (max_element(all(ds)) - (ds).begin())
#define bs(ds, x) (binary_search(all(ds), x))
#define lb(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
#define ub(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))// normal ceil(n,1)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);                                 
#define eps 1e-9 
#define PI 3.141592653589793238462643383279502884L
#define py cout << "YES" << endl // Print Yes
#define pn cout << "NO" << endl	 // Print No
#define read(v,n,x) int x; vi v;for(int i=0;i<n;i++){ cin>>x; v.pb(x);}
string to_string(bool b) { return b ? "1" : "0"; } string to_string(char c) { return string(1, c); } string to_string(string s) { return s; }
template <class T> string dbg(T x) { return to_string(x); }  
template <typename T> T exp(T b, T p){T x = 1;while(p){if(p&1)x=(x*b);b=(b*b);p=p>>1;}return x;}
long long INFF = 1000000000000000005ll;
const int mod=1000000007;
template <typename T> vector<T> &operator--(vector<T> &v){for (auto &i : v)--i;return v;}template <typename T> vector<T> &operator++(vector<T> &v){for (auto &i : v)++i;return v;}template <typename T> istream &operator>>(istream &is, vector<T> &v){for (auto &i : v)is >> i;return is;}template <typename T> ostream &operator<<(ostream &os, vector<T> v){for (auto &i : v)os << i << ' ';return os;}
template <typename T, typename U> pair<T, U> &operator--(pair<T, U> &p){--p.first;--p.second;return p;}template <typename T, typename U> pair<T, U> &operator++(pair<T, U> &p){++p.first;++p.second;return p;}template <typename T, typename U> istream &operator>>(istream &is, pair<T, U> &p){is >> p.first >> p.second;return is;}template <typename T, typename U> ostream &operator<<(ostream &os, pair<T, U> p){os << p.first << ' ' << p.second;return os;} template <typename T, typename U> pair<T, U> operator-(pair<T, U> &a, pair<T, U> &b) { return mp(a.first - b.first, a.second - b.second); }template <typename T, typename U> pair<T, U> operator+(pair<T, U> &a, pair<T, U> &b) { return mp(a.first + b.first, a.second + b.second); }
vi prefixSum(vector<int> arr){int n = arr.size();vector<int> preArr(n);preArr[0] = arr[0]; for (int i = 1; i < n; i++)preArr[i] = preArr[i - 1] + arr[i];return preArr;}

void solve()
{
    
}

int main()
{
    fast;
    test(t)
        solve();
    return 0;
}