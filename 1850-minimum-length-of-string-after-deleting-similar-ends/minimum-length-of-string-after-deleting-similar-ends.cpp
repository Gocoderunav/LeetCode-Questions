class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i=0;
        int j= n-1;
        if(n==1) return 1;
        while(i<j && i < n && j>=0){
            if(s[i]==s[j]){
                while((i<j) && s[i]==s[i+1]) i++;
                while((i<j) && s[j]==s[j-1]) j--;
                i++;
                j--;
            }
           else{
            break;
           }
        }
        return (j>=i)? j-i+1:0;
    }
};