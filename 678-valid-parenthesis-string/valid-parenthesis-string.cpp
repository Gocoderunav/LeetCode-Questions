class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int openCount = 0, asteriskCount = 0;

        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(' || s[i] == '*') {
                openCount++;
            } else if (s[i] == ')') {
                if (openCount > 0) {
                    openCount--;
                } else if (asteriskCount > 0) {
                    asteriskCount--;
                } else {
                    return false; 
                }
            }
        }

        openCount = 0, asteriskCount = 0;
       
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == ')' || s[i] == '*') {
                openCount++;
            } else if (s[i] == '(') {
                if (openCount > 0) {
                    openCount--;
                } else if (asteriskCount > 0) {
                    asteriskCount--;
                } else {
                    return false; 
                }
            }
        }

        return true; }
};