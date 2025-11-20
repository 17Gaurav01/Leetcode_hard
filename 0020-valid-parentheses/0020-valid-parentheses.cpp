class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='(' or x=='[' or x=='{') st.push(x);
            else{
                if(st.size() and x==']' and st.top()=='[') 
                    st.pop();
               else if(st.size() and x==')' and st.top()=='(') 
                    st.pop();
               else if(st.size() and x=='}' and st.top()=='{')
                    st.pop();
                else{
                    return 0;
                }            
            }
        }
        if(st.size()==0) return 1;
        return 0;
        
    }
};