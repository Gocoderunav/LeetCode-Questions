#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    string helper(string s, string t) {
        int i = 0, j = 0;
        string str = "";
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                str.push_back(s[i]);
                i++;
                j++;
            } else {
                break;
            }
        }
        return str;
    }
  
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string str = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            str = helper(str, strs[i]);
            if (str.empty()) break;  
        }
        return str;
    }
};
