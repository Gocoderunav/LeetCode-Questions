class Solution {
private:
    string commonPrefix(string s1, string s2) {
        int i = 0;
        int n1 = s1.size();
        int n2 = s2.size();
        string res = "";
        while (i < n1 && i < n2) {
            if (s1[i] != s2[i]) {
                break;
            }
            res += s1[i];
            i++;
        }
        return res;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) return "";
        string prefix = strs[0]; 
        for (int i = 1; i < n; i++) {
            prefix = commonPrefix(prefix, strs[i]); 
        }
        return prefix;
    }
};
