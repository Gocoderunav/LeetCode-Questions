#include <vector>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int hashmap[2] = {0}; 

        
        for (int i = 0; i < students.size(); i++) {
            hashmap[students[i]]++; 
        }

        
        for (int i = 0; i < sandwiches.size(); i++) {
            if (hashmap[sandwiches[i]] > 0) {
                hashmap[sandwiches[i]]--; 
            } else {
                
                break;
            }
        }

        
        if (hashmap[0] > 0)
            return hashmap[0];
        else if (hashmap[1] > 0)
            return hashmap[1];
        else
            return 0; 
    }
};
