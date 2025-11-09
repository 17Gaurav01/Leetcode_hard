class Solution {
public:
  int dp[2005][2005];
    int helper(int i,int j , string &s , string &p){
        if(i==s.size() and j==p.size()) return 1;
        if(j>=p.size()) return 0;
        if(i==s.size()){
            for (int k = j; k < p.size(); k++)
                if (p[k] != '*') return 0;
            return 1;
        }

       if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==p[j] or p[j]=='?'){
            return dp[i][j]=helper(i+1,j+1,s,p);
        }
        if(p[j]=='*'){
            return  dp[i][j]=helper(i+1,j,s,p) or helper(i,j+1,s,p);
        }
        return dp[i][j]=0;
    
        
    }
    bool isMatch(string s, string p) {
        
       memset(dp,-1,sizeof dp);
        return helper(0,0,s,p);
    }
};