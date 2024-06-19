class Solution {
public:
    string destCity(std::vector<std::vector<std::string>>& paths) {
        unordered_map<string, bool> hashmap;
        for (const auto& path : paths) {
            hashmap[path[0]] = true; 
            if(hashmap.find(path[1])==hashmap.end()){
                hashmap[path[1]] = false; 
            }
             
        }

        for (const auto& p : hashmap) {
            if (p.second == false) { 
                return p.first;
            }
        }
        return ""; 
    }
};