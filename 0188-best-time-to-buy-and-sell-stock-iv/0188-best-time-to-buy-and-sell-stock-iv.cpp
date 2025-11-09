class Solution {
public:
  int dp[1005][3][105];
   int helper(int i ,int f , int k , vector<int>&v){
    int n = v.size();
    if(i==n or k==0) return 0;
    
    if(dp[i][f][k]!=-1) return dp[i][f][k];

    if(f){
        return dp[i][f][k] = max(helper(i+1 , 0 , k , v)- v[i] , helper(i+1 , 1 , k , v));

    }
    return dp[i][f][k] = max(helper(i+1 , 1 , k-1 , v)+ v[i], helper(i+1 , 0 , k , v));

   }
    int maxProfit(int k, vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return helper(0,1,k,v);
    }
};