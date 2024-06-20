class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> hashset(2,0);
        for(int i=0;i<students.size();i++){
            hashset[students[i]]++;
        }

        for(int j=0;j<sandwiches.size();j++){
            if(hashset[sandwiches[j]]>0 ){
                hashset[sandwiches[j]]--;
            }else{
                break;
            }
        }
        if(hashset[0]>0 ) return hashset[0];
        return hashset[1];
    }
};