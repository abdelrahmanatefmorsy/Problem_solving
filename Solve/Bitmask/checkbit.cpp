// *********************************************************************
/**
 * Integer check bit 
 */
bool checkBit(int x, int i){
    return x & (1 << i);
}
/**
 * ll check bit 
 */
bool checkBit(long long x, long long i){
    long long one = 1;
    return x & (one << i);
}
