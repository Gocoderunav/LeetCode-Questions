class Solution {
public:
    string largestGoodInteger(string num) {
        vector<bool> hashset(10, false); 
        for(int i = 1; i < num.size() - 1; i++) { 
            if(num[i-1] == num[i] && num[i] == num[i+1]) {
                hashset[num[i] - '0'] = true; 
            }
        }
        string ans = "";
        for(int j = 9; j >= 0; j--) {
            if(hashset[j] == true) {
                ans = string(3, '0' + j); 
                break; 
            }
        }
        return ans;
    }
};
