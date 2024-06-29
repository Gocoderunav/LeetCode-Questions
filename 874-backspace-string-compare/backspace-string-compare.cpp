class Solution {
private: 
     string stringFree(string s ){
        string str="";
        int i =s.size();
        int count =0;
        while(i >=0){
            if(s[i]=='#'){
                count++;

            }else {
                if(count >0){
                    count--;
               }else{
                str+=s[i];
               }
            }

            i--;
        }
        reverse(str.begin(), str.end());
        return str; 
}
public:
    bool backspaceCompare(string s, string t) {
        
        return stringFree(s) == stringFree(t);
       
    }
};