class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                if(st.size()>0)st.pop();
            }else if(operations[i]=="D"){
                    int a = st.top();
                    
                    st.push(2*a);
            }else if(operations[i]=="+"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(b);
                    st.push(a);
                    st.push(a+b);
            }else{
                 int a = stoi(operations[i]);
                 st.push(a);
            }
        }
        int sum =0;
        while(!st.empty()){
            int a = st.top();
            st.pop();
            sum+=a;
        }
        return sum;
    }
};