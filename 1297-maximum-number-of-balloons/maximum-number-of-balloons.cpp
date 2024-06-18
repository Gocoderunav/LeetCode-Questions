class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> counts;
        for(auto c: text){
           if (c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n') {
                counts[c]++;
            }
         }
        int minCount = INT_MAX;
        minCount = min(minCount, counts['b']); 
        minCount = min(minCount, counts['a']); 
        minCount = min(minCount, counts['l'] / 2); 
        minCount = min(minCount, counts['o'] / 2); 
        minCount = min(minCount, counts['n']); 

        return minCount;

    }
};