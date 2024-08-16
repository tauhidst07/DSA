class Solution { 
      int findPivot(vector<int>& nums){
        int s=0; 
        int e=nums.size()-1; 
        int m=s+(e-s)/2; 
        int piv=-1; 
        while(s<=e){
            if(m<e && nums[m]>nums[m+1]){
                  piv=m; 
                  break;
            } 
            else if(m>s && nums[m]<nums[m-1]){
                piv=m-1; 
                break;
            } 
            else if(nums[m]<nums[0]){
                e=m-1;
            }  
            else{
                s=m+1;
            } 
            m=s+(e-s)/2;
        }  
        return piv;
    }  
public:
    int findMin(vector<int>& nums) {
        return nums[findPivot(nums)+1];
    }
};
