class Solution {
private:
  bool checkPalindrome(string s ){
     int i=0, j= s.size()-1;
     while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else if(s[i]!=s[j]){
            return false;
        }
        
     }
     return true;
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