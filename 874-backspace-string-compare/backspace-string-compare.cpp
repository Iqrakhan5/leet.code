class Solution {
public:
    bool backspaceCompare(string s, string t) {
            stack<char>ss;
            stack<char>st;   
            for(auto i: s){
            if(i=='#'){
                if(!ss.empty()){
                    ss.pop();
                }
            }
            else{
                 ss.push(i);
            }}
                   for(auto j: t){
            if(j=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                 st.push(j);
            }}
            return ss==st;
    }
            
            
            
};