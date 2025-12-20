class Solution {
public:
    int minimumDifference(vector<int>& v) {
    int n = v.size();
        int m = n / 2;
        vector<int> a(v.begin(), v.begin() + m);
        vector<int> b(v.begin() + m, v.end());

        vector<vector<int>> x(m + 1), y(m + 1);

        for(int mask = 0; mask < (1 << m); mask++){
            int s = 0, c = 0;
            for(int i = 0; i < m; i++){
                if(mask & (1 << i)){
                    s += a[i];
                    c++;
                }
            }
            x[c].push_back(s);
        }

        for(int mask = 0; mask < (1 << m); mask++){
            int s = 0, c = 0;
            for(int i = 0; i < m; i++){
                if(mask & (1 << i)){
                    s += b[i];
                    c++;
                }
            }
            y[c].push_back(s);
        }

        int tot = accumulate(v.begin(), v.end(), 0);
        int ans = INT_MAX;

        for(int i = 0; i <= m; i++){
            sort(y[i].begin(), y[i].end());
        }

        for(int i = 0; i <= m; i++){
            for(int s1 : x[i]){
                int need = tot / 2 - s1;
                auto &vv = y[m - i];
                auto it = lower_bound(vv.begin(), vv.end(), need);
                if(it != vv.end())
                    ans = min(ans, abs(tot - 2 * (s1 + *it)));
                if(it != vv.begin()){
                    --it;
                    ans = min(ans, abs(tot - 2 * (s1 + *it)));
                }
            }
        }

        return ans;
        
    }
};