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
// *********************************************************************









int bigmod(string &s , int num){
    ll res = 0;
    for (int i = 0; i < s.size(); i++) {
		res *= 10;
		res += s[i] - '0';
		res %= num;
	}
    return res;
}
