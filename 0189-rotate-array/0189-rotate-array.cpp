class Solution {
public:
    void rotate(vector<int>& a, int k) {
      int n = a.size();
      int idx = k%n;

      reverse(a.begin() , a.begin() + n-idx);
      reverse(a.begin() , a.end());
      reverse(a.begin() , a.begin() + idx);
        
    }
};