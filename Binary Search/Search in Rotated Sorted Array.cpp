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
    int search(vector<int>& nums,int start,int end,int target){
        int m=start+(end-start)/2;  
        int ind=-1;
        while(start<=end){
            if(nums[m]==target){
              ind=m; 
              break;
            } 
            else if(nums[m]>target){
                end=m-1;
            } 
            else{
                start=m+1;
            } 
             m=start+(end-start)/2; 
        } 
        return ind;
    }
public:
    int search(vector<int>& nums, int target) {
        int ind=-1; 
        int piv =findPivot(nums);  
        cout<<piv;
        ind = search(nums,0,piv,target); 
        if(ind == -1){
           ind= search(nums,piv+1,nums.size()-1,target);
        }
        return ind;
    }
};
