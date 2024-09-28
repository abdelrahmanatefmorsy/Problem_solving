#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define vi vector
using namespace std;
using namespace __gnu_pbds;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
//#define sort(X) sort(X.begin(),X.end());
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define vi vector<ll>
#define vii vector<vi>
#define ordered_set tree<ll , null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define vc vector<char>
#define vcc vector<vc>
#define mi map<ll,ll>
#define mc map<char,int>
#define S second
#define F first
#define vp vector<pair<ll,ll>>
#define cinv(v,n) for(int i = 0;i<n;i++)cin>>v[i];
#define coutv(v,n) for(int i = 0;i<n;i++)cout<<v[i]<<" ";
using namespace std;
void letsMakeItFaster()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}
string to_binary(ll n){
    string s;
    while (n){
        int rem = n % 2;
        s.push_back(char(rem + '0'));
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
// multiply x by 2 i times
int shift_left(int x, int i){
    return x << i;
}
// divide x by 2 i times
int shift_right(int x, int i){
    return x >> i;
}
// set ith bit
ll light(ll x, ll i){
    ll one = 1;
    return x | (one << i);
}
// unset ith bit
ll dark(ll x, int i){
    ll one = 1;
    return x & (~(one << i));
}
// check the existence of the bit
bool checkBit(ll x, ll i){
    ll one = 1;
    return x & (one << i);
}
// Flipping the ith bit
int flipBit(int x, int i){
    return x ^ (1 << i);
}
// get the least significant bit
int LSB(int x){
    return x & (-x);
}
// get the most significant bit
ll MSB(ll x){
    ll msb = 0;
    while (x){
        x >>= 1;
        msb++;
    }
    return msb - 1;
}
bool checkPowerOfTwo(int x){
    return !(x & (x - 1));
}
void subseq(int n , vector<ll>&v)
{
    int res = (1<<n)-1;
    for(int i = 0;i<=res;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(checkBit(i,j)==1)
            {
                cout<<v[j]<<" ";
            }
        }
        cout<<endl<<" ";
    }
}
ll least(ll n ,int i)
{
    string s = to_binary(n);
    reverse(all(s));
    int  k = 0;
    if(i>=s.size())
        return -1;
    for (int j = i; j <s.size(); ++j) {
        if(s[j]=='1')
        {
            k = j;
            break;
        }
    }
    ll tmp = n;
    for (int j = 0; j <k ; ++j) {
        tmp=  light(tmp,j);
    }
    tmp = dark(tmp,k);
    return tmp;
}
ll most (ll n ,int i)
{
    string s = to_binary(n);
    ll tmp = n;
    tmp = light(tmp,i);
    for (int j = 0; j <i; ++j) {
        tmp = dark(tmp,j);
    }
    return tmp;
}
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x,
                         int y, int p)
{
    unsigned long long res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,
                              int p)
{
    return power(n, p - 2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
void solve(int test)
{
   
cout<<"hello";
}


int main() {
    letsMakeItFaster();
    int t = 1;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        solve(i);
        cout<<'\n';
    }
}
