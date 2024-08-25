class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int e=(matrix.size()*matrix[0].size())-1; 
        int col=matrix[0].size(); 
        int m=s+(e-s)/2; 
        while(s<=e){
            int i=m/col; 
            int j=m%col; 
            if(matrix[i][j]==target){
                return true;
            } 
            else if(matrix[i][j]>target){
                e=m-1;
            } 
            else{
                s=m+1;
            } 
            m=s+(e-s)/2;
        } 
        return false;
    }
};
