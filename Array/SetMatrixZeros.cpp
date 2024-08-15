class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {  
        vector<pair<int,int>> index;
        int row = matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                   index.push_back({i,j});
                }
            }
        } 
        if(index.size()>0){ 
              for(auto p:index){
                int r=p.first; 
                int c=p.second; 
                 for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                if( i==r || j ==c){
                   matrix[i][j]=0;
                }
            }
        
            }
        }
        }
    } 
};
