class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        int n=v.size();

        int res=0;
       
        sort(v.begin(),v.end());
         int j=v[0][1];
        for(int i=1;i<n;i++){
            if(v[i][0]<j){
                res++;
                j=min(j,v[i][1]);
            }
            else{
                j=v[i][1];
            }
        }
        return res;


    }
};