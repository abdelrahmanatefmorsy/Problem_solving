#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
//#define sort(X) sort(X.begin(),X.end());
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define vi vector<ll>
#define vii vector<vi>
#define vc vector<char>
#define vcc vector<vc>
#define mi map<ll,int>
#define mc map<char,int>
#define cinv(v,n) for(int i = 0;i<n;i++)cin>>v[i];
using namespace std;
void letsMakeItFaster()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}
/**
 * 
 * convert  to binary
 */
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
