class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        priority_queue<int>pq;
        for(auto x:nums) pq.push(x);
       int n = nums.size();
        vector<int>ans(n);
       int i=n-1;
        while(pq.size()){
            int x = pq.top();
            pq.pop();
            ans[i]=x;
            i--;
        }
        return ans;

    }
};