class Solution {
private:
  bool checkPalindrome(string s ){
     string temp = s;
     reverse(s.begin(),s.end());
     return s ==temp;
  }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it : words){
            if(checkPalindrome(it)==true){
                return it;
            }
        }
        return "";
    }
};