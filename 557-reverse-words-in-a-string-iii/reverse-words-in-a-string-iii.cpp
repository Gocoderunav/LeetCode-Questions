class Solution {

public:
    string reverseWords(string s) {
        string str="";
        string temp ="";
        for(int i=0;i<s.size();i++){
             if(s[i]!=' '){
            temp +=s[i];
               }
             else{
                 reverse(temp.begin(),temp.end());
                  str+=temp;
                  temp="";
                  str+=s[i];
        }
        }
        reverse(temp.begin(),temp.end());
        str+=temp;
        return str;
    }
};