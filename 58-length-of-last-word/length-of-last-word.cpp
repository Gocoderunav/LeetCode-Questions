class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.size();
        int ptr=n-1;
        while(ptr>=0 && s[ptr]==' '){
            ptr--;
           
        }
    while(ptr>=0 && s[ptr]!=' '){
        count++;
        ptr--;
    }
      return count; 
    }
};