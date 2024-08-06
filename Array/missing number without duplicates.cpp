class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int index; 
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                index=nums[i]-1; 
                if(nums[i]==nums[index]){
                    i++;
                } 
                else{
                    swap(nums[i],nums[index]);
                }
            } 
            else{
                i++;
            }
        } 
       
        for(int i=0;i<nums.size();i++){
           if(nums[i]!= i+1){
            return i+1;
           }
        } 
        return 0;
    }
};
