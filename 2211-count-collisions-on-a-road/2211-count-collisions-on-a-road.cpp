class Solution {
public:
    int countCollisions(string s) {
        
        stack<char>st;
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.size() and st.top()=='R' and s[i]=='L'){
                st.pop();
                st.push('S');
                res+=2;
            }
            else if(st.size() and st.top()=='R' and s[i]=='S'){
                st.pop();
                st.push('S');
                res++;
            }
            else if(st.size() and st.top()=='S' and s[i]=='L'){
                res++;
                
            }
            else{
                st.push(s[i]);
            }
        }
        while(st.size() and st.top()=='R') st.pop();
        while(st.size() ){
            if(st.top()=='R') res++;
            st.pop();
        }
        return res;
    }
};