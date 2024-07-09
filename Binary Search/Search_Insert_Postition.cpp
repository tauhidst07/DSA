class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s,e,m,prev,next; 
        s=0; 
        e=nums.size()-1; 
        m = s+(e-s)/2; 
        prev=0;  
        next=-1;
        while(s<=e){
            if(nums[m]==target){
                return m;
            } 
            else if(nums[m] > target){
                e=m-1; 
                next=m;
            } 
            else{
                prev=m; 
                s=m+1;
            } 
             m = s+(e-s)/2; 
        }  
        if(next>=0){
            return next;
        } 
        else{
        return prev+1;
        }
    }
};
