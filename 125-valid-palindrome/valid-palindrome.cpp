class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str="";
        for(int i=0;i<s.size();i++){  
            if(s[i] >='A' && s[i]<='Z'){
                char ch = s[i]-'A'+'a';
                str+=ch;
            }
            else if(s[i]>='a' && s[i] <='z' || (s[i] >='0' && s[i] <='9')){
                char ch = s[i];
                str+=ch;
            }
                continue;
         }

         string temp = str;
         reverse(temp.begin(),temp.end());
         return temp ==str; 
    }
};