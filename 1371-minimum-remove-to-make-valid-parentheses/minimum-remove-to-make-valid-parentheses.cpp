class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        int openCount = 0;
        
        // First pass: remove excess closing parentheses and count open parentheses
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                openCount++; // Increment count of open parentheses
            } else if (s[i] == ')') {
                if (openCount == 0) {
                    s[i] = '*'; // Mark excess closing parentheses for removal
                } else {
                    openCount--; // Decrement count of open parentheses
                }
            }
        }
        
        // Second pass: remove excess open parentheses
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '(' && openCount > 0) {
                s[i] = '*'; // Mark excess open parentheses for removal
                openCount--; // Decrement count of open parentheses
            }
        }
        
      
        string res = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '*') {
                res += s[i];
            }
        }

        return res;
    }
};
