class Solution {
public:
   #define ll long long
    const int mod = 1e9+7;
    int nthMagicalNumber(int k, int a, int b) {
        ll lo = min(a,b), hi = k*lo;
        ll ab = lcm(a,b);
        ll ans = 0;
        while(lo <= hi) {
            ll mid = lo + (hi - lo)/2;
            ll cnt = mid/a + mid/b - mid/ab ;
            if(cnt < k) 
                lo = mid + 1;
            else
                hi = mid-1 , ans = mid;
        }
        return ans%mod;
    }
};