#define ll long long
class Solution {
public:
 
    int maxScore(vector<int>& v, int k) {
        int res =0 ;
        

        int sum =0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        int mx = sum;
        int n = v.size();
        int i = k-1;
        int j = n-1;
        while(i>=0){
          sum-=v[i];
          sum+=v[j];
          j--;
          i--;
          mx = max(mx , sum);
        }
        return mx;
    }
};