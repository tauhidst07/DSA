
class Solution { 
    int split(vector<int>& nums,int value){
        int count=1;  
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=value){
                sum+=nums[i];
            } 
            else{
                count++; 
                sum=nums[i];
            }
        } 
        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(),nums.end()); 
        long long e=accumulate(nums.begin(),nums.end(),0); 
        int m=s+(e-s)/2;  
        int ans=-1;
        while(s<=e){
            if(split(nums,m)<=k){
             ans=m; 
             e=m-1;
            } 
            else{
                s=m+1;
            } 
            m=s+(e-s)/2;
        } 
        return ans;
    }
};
