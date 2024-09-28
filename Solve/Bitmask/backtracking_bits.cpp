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
bool checkBit(ll x, ll i){
    ll one = 1;
    return x & (one << i);
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
