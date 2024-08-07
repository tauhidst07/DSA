class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        vector<int> ans; 
        map<int,int> value; 
        for(int i=0;i<nums.size();i++){
            int rem = target-nums[i]; 
            if(value.find(rem)!=value.end()){ 
                int find = value[rem];
                ans.push_back(find); 
                ans.push_back(i);
            } 
            value[nums[i]]=i;
        } 
        return ans;
    }
};
