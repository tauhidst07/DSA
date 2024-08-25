class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here  
        int m=arr.size();
        int maxIndex=-1;  
        int j=arr[0].size()-1;;
        for(int i=0;i<m;i++){
          while(j>=0 && arr[i][j]==1){
              j--; 
              maxIndex=i;
          }
        } 
        return maxIndex;
    }
};
