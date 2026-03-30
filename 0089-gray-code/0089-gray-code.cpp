class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>ans;
        int tot=1<<n;
        for(int i=0;i<tot;i++){
            ans.push_back(i^(i>>1));
        }
        return ans;
    }
};