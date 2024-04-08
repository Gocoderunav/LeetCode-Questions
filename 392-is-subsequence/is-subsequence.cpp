class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1= s.size();
        int n2 =t.size();
        if(n1 > n2) return false;
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                
            }
            j++;
        }
        if(i==n1){
            return true;
        }
    return false;
    }
};