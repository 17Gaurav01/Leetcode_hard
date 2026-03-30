class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32;i++){
            int mask=1<<i;
            if((c&mask)==0){
                if((a&mask)!=0) ans++;
                if((b&mask)!=0) ans++;
            }
            else {
                if((a&mask)==0 and (b&mask)==0) ans++;
            }
        }
        return ans;
    }
};