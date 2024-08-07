class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
            }
            else if(!st.empty()){
                auto ch = st.top();
                     if( ch =='{' && s[i]=='}' || ch =='(' && s[i]==')' ||ch =='[' && s[i]==']'  ){
                        st.pop();
                       }else{
                        return false;
                       }
                }
              
              else {
              return false;}
        }
        return st.size()==0? true:false;
    }
};