class Solution {
public:
    int poorPigs(int a, int b, int c) {
        
      int res1 = log(a);
      int res2 = log(c/b+1);

      return ceil(log2(a)/log2(c/b+1));

    }
};