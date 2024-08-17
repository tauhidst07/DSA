class Solution { 
    int findPivot(vector<int>& nums){
        int s=0;  
        int n=nums.size();
        int e=n-1; 
        int m=s+(e-s)/2; 
        int piv=-1;   
        while(s<=e){
            if(m<n-1 && nums[m]>nums[m+1]){
                  piv=m; 
                  break;
            }  
            else if((m > 0) && nums[m]<nums[m-1]){
                piv=m-1; 
                break;
            }  
            else if(nums[m]<nums[0]){
                e=m-1;
            }  
            else if(nums[m]==nums[0] && nums[m]==nums.back()){ 
                if(s<n-1 && nums[s]>nums[s+1]){
                    piv=s;
                } 
                if(s>0 && nums[s]<nums[s-1]){
                    piv=s-1;
                } 
                if(e<n-1 && nums[e]>nums[e+1]){
                    piv=e;
                } 
                if(e>0 && nums[e]<nums[e-1]){
                    piv=e-1;
                } 
                s++; 
                e--;
            }
            else{
                s=m+1;
            }  
            
            m=s+(e-s)/2;
        }  
        return piv;
    } 
      int searchInd(vector<int>& nums,int start,int end,int target){
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
    bool search(vector<int>& nums, int target) { 
        int piv=-1; 
        int start;   
        int end;  
        piv =findPivot(nums); 
        cout<<piv;
        if(piv!=-1 && target>=nums[0] && target<=nums[piv]){
            start=0; 
            end=piv;
        } 
        else{
            start=piv+1; 
            end=nums.size()-1;
        } 
       int ind= searchInd(nums,start,end,target); 
       if(ind == -1){
        return false;
       } 
       else{
        return true;
       }
    }
};
