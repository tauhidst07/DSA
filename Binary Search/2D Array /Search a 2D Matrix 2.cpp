class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0;i<matrix.size();i++){
        //     int s=0; 
        //     int e=matrix[i].size()-1; 
        //     int m=s+(e-s)/2; 
        //     while(s<=e){
        //         if(matrix[i][m]==target){
        //             return true;
        //         } 
        //         else if(matrix[i][m]>target){
        //             e=m-1;
        //         } 
        //         else{
        //             s=m+1;
        //         } 
        //          m=s+(e-s)/2;
        //     }
        // } 
        // return false; 
        int n=matrix.size(); 
        int j=matrix[0].size()-1;  
        int i=0;
        while(i<n && j>=0){
            if(matrix[i][j]==target){
                return true;
            } 
            else if(matrix[i][j]<target){
                i++;
            } 
            else{
                j--;
            }
        } 
        return false;
    }
};
