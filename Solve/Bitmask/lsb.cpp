# define ll long long
// *********************************************************************
/**
 * Integer lsb 
 */
// get the least significant bit
int LSB(int x){
    return x & (-x);
}
/**
 * ll lsb 
 */
ll LSB(ll x){
    return x & (-x);
}
/**
 * int Msb 
 */
int MSB(int x){
    int msb = 0;
    while (x){
        x >>= 1;
        msb++;
    }
    return msb - 1;
}
/**
 * ll Msb 
 */
ll MSB(ll x){
    ll msb = 0;
    while (x){
        x >>= 1;
        msb++;
    }
    return msb - 1;
}
