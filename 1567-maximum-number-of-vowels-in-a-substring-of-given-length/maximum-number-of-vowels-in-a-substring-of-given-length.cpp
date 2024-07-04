class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        int r = 0, l = 0;
        int count = 0;
        int res = 0;
        int n = s.size();

        while (r < n) {
            if (vowels.find(s[r]) != vowels.end()) {
                count++;
            }
            
            if (r - l + 1 > k) {
                if (vowels.find(s[l]) != vowels.end()) {
                    count--;
                }
                l++;
            }
            
            res = max(res, count);
            r++;
        }
        return res;
    }
};
