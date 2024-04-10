class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows ==1) return s;
        string ans ="";
        for(int row =0; row < numRows ; row++){
            
              int increment = 2*(numRows-1);
              for(int i =row ; i < s.length(); i+= increment){
                ans +=s[i];
                if(row >0 && row < numRows-1 && i+increment -2*row < s.length()){
                    ans+=s[i+increment -2*row];
                }
              }
        }
        return ans;
    }
};