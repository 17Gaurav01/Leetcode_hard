class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int x=0;
        for(int num : nums){
            x ^= num;
        }
      unsigned int mask = (unsigned int)x & (-(unsigned int)x);

        int num1 = 0;
        int num2 = 0;

        for(int num : nums){
            if((num & mask) != 0){
                num1 ^= num;
            }else{
                num2 ^= num;
            }
        }
        return {num1,num2};
    }
};