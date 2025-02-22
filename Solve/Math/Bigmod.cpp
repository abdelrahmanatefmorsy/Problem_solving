#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace std;



int bigmod(string &s , int num){
    ll res = 0;
    for (int i = 0; i < s.size(); i++) {
		res *= 10;
		res += s[i] - '0';
		res %= num;
	}
    return res;
}
