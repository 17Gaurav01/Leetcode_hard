class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int mx = 0;
        int sum = 0;
        for(int i = 0; i < n ; i++){
            sum += nums[i];
            sum = max(0 , sum);
            mx = max(mx , sum);
            
        }
        int mx1 = INT_MIN;
        for(int i=0;i<n;i++){
            mx1 = max(mx1 , nums[i]);
        }
        
        if(mx1<0) return mx1;


        return mx;
    }
};