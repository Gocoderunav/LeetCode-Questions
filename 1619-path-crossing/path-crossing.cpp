class Solution {
public:
    bool isPathCrossing(string path) {
       int x=0,y=0;
       set<pair<int,int>> st;
       st.insert({0,0});
       for(int i=0;i<path.size();i++){
          if(path[i]=='N'){
            y++;
          }else if(path[i]=='S'){
            y--;
          }else if(path[i]=='E'){
            x++;
          }else if(path[i]=='W'){
            x--;
          }
          if(st.find({x,y})!=st.end()){
              return true;
          } 
          st.insert({x,y});
       }
       
       return false;
    }
};