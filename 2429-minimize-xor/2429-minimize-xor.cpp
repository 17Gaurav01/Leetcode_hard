class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int cnt = __builtin_popcount(num2);
        int ans=0;
        for(int i=31;i>=0;i--){
            if(((num1>>i) &1)){
                if(cnt)
                  ans |= (1<<i) , cnt--;
            }
        }
        for(int i=0;i<32 and cnt;i++){
            if(((ans >>i)&1) ==0){
                 ans |=(1<<i);
                 cnt--;
            }
        }
        return ans;


    }
};