class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res ;
       if (numRows == 1) {
        return {{1}};
            }
            if(numRows == 2) {
               return {{1}, {1, 1}};
               }
       res.push_back({1});  
       res.push_back({1, 1});
       for(int i=2;i<numRows;i++){
            vector<int> vec(i+1,1);
             for(int j=1;j<=i-1;j++){
                vec[j]= res[i-1][j-1]+res[i-1][j];}
              res.push_back(vec);
         }  
         return res;
    }
};