class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i =0, j =0;
        int mini = min(word1.size(),word2.size());
        string str="";
        while(i<mini && j < mini){
           str+=word1[i];
           str+=word2[j];
           i++;
           j++;
        }
        if(word1.size()>mini){
            str+= word1.substr(mini);
        }
        if(word2.size()>mini){
            str+= word2.substr(mini);
        }
        return str;
    }
};