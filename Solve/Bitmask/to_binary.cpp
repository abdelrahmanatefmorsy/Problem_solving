#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
