class Solution {
public:
    int lengthOfLastWord(string s) {
     int n = s.size();
     int j=n-1;
     int count=0;
     while(j>=0 && s[j]==' '){
        j--;
     }
     int ptr=j;
     while(ptr >=0 && s[ptr]!=' '){
        count++;
        ptr--;
     }
    
    
    
    return count;
    }
};