class Solution {
public:
    vector<int> dp;

    int ways(int i, int mask, int n) {
        if (i > n) return 1;
        if (dp[mask] != -1) return dp[mask];

        int cnt = 0;

        for (int p = 1; p <= n; p++) {
            int bit = 1 << (p - 1);

            if ((mask & bit) == 0 && (i % p == 0 || p % i == 0)) {
                cnt += ways(i + 1, mask | bit, n);
            }
        }

        return dp[mask] = cnt;
     }
    int countArrangement(int n) {
          dp.assign(1 << n, -1);
        return ways(1, 0, n);
    }
};