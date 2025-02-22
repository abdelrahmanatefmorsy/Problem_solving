# define ll long long

// *********************************************************************
/**
 * Integer set bit
 */
int light(int x, int i){
    return x | (1 << i);
}
/**
 * ll set bit
 */
ll light(ll x, ll i){
    ll one = 1;
    return x | (one << i);
}
/**
 * int unset bit
 */
int dark(int x, int i){
    return x & (~(1 << i));
}
/**
 * ll unset bit
 */
ll dark(ll x, ll i){
    return x & (~(1 << i));
}
/**
 * int flip bit
 */
int flipBit(int x, int i){
    return x ^ (1 << i);
}
/**
 * ll flip bit
 */
ll flipBit(ll x, ll i){
    ll one = 1;
    return x ^ (1 << i);
}

