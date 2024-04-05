class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> vec;
        int n = matrix.size();
        int m =matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                vec.push_back({i,j});
            }
        }
        }
        for(auto it : vec){
            int rowNo = it[0];
            int colNo = it[1];
            for(int i =0;i<m ;i++){
                matrix[rowNo][i]=0;
            }
            for(int j =0;j<n ;j++){
                matrix[j][colNo]=0;
            }
        }
    }
};