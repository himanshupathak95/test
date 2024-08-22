// -----------------------------------------------------------
                    // author : himanshupat95
//------------------------------------------------------------

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// -----------------------------------------------------------
#define ll                  long long int
#define ull                 unsigned long long int
#define ld                  long double
#define MOD                 1000000007 // 1e9 + 7
#define INF                 1e18
#define PI                  3.141592653589793238462643383279
#define MAX                 INT_MAX
#define MIN                 INT_MIN
// -----------------------------------------------------------
#define setbits(x)          __builtin_popcount(x)
#define checkparity(x)      __builtin_parity(n) 
#define leadzeros(x)        __builtin_clz(x) // leading zeroes
#define trailzeros(x)       __builtin_ctz(x) // trailing zeroes
#define setprecs(x)         cout<<setprecision(x)<<fixed
// -----------------------------------------------------------
#define viewv(v)            for(auto x : v) cout<<x<<" "; cout<<"\n"
#define viewmap(mp)         for(auto x : mp) cout<<x.first<<" "<<x.second<<"\n"
#define viewvp(mp)          for(auto x : mp) cout<<x.first<<" "<<x.second<<"\n"
#define viewmat(v)          for(auto i : v) for(auto j : r) cout<<j<<" "; cout<<"\n"
// #define F(i,a,n)         for(long long int i=a; i<n; i++)
// #define FR(i,a,n)        for(long long int i=n-1; i>=a; i--)
// #define pb               push_back
// #define eb               emplace_back
// #define sz(v)            v.size()
// #define len(s)           s.length()
// #define mkpr             make_pair
// #define ss               second
// #define ff               first
// #define mapllll          map<long long int, long long int>
// #define vpair            vector<pair<long long int,long long int>>
// mt19937                  rng(chrono::steady_clock::now().time_since_epoch().count());
// -----------------------------------------------------------
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// order_of_key(x)      :   number of items strictly smaller than x
// *find_by_order(x)    :   xth element from set (zero-indexed)
// -----------------------------------------------------------
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void flash_input_output()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
}
// -----------------------------------------------------------
// ll gcd(ll a, ll b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// ll lcm(ll a, ll b)
// {
//     return (a * b) / gcd(a, b);
// }
// -----------------------------------------------------------
// bool sortBySecond(const pair<int,int> &a, const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

// bool sortBySecDesc(const pair<int,int> &a, const pair<int,int> &b)
// {
//        return a.second>b.second;
// }

//  use : sort(a.begin(), a.end(), sortbysec); 
// -----------------------------------------------------------
// string DecimalToBinary(int num)
// {
//     string str = "";
//     while(num) {
//         if(num & 1) // 1
//         str+='1';
//         else // 0
//         str+='0';
//         num>>=1; // Right Shift by 1 
//     }   
//     reverse(str.begin(), str.end());
//     return str;
// }
// -----------------------------------------------------------
// ll expo(ll a, ll b, ll INF) 
// {
//     ll res = 1; 
//     while (b > 0) 
//     {
//         if (b & 1)res = (res * a) % mod; 
//         a = (a * a) % mod; b = b >> 1;
//     } 
//     return res;
// }
// -----------------------------------------------------------
// ll binarySearch(vector<ll> arr, ll l, ll r, ll x)
// {
//   if (r >= l)
//   {
//     ll mid = l + (r - l) / 2;

//     if (arr[mid] == x)
//       return mid;

//     if (arr[mid] > x)
//       return binarySearch(arr, l, mid - 1, x);

//     return binarySearch(arr, mid + 1, r, x);
//   }
//   return -1;
// }
// -----------------------------------------------------------
int lemonade()
{
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }




return 0;
}
// -----------------------------------------------------------
int main()
{
    flash_input_output();
    file_io(); // comment in google contests

    int T = 1, i = 1;
    cin>>T;

    while(T--)
    {
        // cout << "Case #" << i++ << ": ";
        lemonade();
    }
}