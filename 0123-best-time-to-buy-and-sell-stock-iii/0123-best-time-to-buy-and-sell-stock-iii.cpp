class Solution {
public:
int dp[100005][3][3];
    int helper(int i,int f,int k , vector<int>&v){
      int n=v.size();
      if(i==n or k==0) return 0;
      if(dp[i][f][k]!=-1) return dp[i][f][k];
      if(f){
        return dp[i][f][k]=max(-v[i]+helper(i+1,0,k , v) , helper(i+1,1,k , v));
      }
      return dp[i][f][k]=max(v[i]+helper(i+1,1,k-1 ,v) , helper(i+1 , 0 , k , v));
    }
    int maxProfit(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return helper(0,1,2,v);
    }
};