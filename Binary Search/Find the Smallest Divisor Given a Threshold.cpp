class Solution { 
    bool isAnswer(vector<int>& nums,int thr,int div){
     int sum=0; 
     for(int i=0;i<nums.size();i++){
        sum+=ceil(double(nums[i]/double(div))); 
        if(sum>thr){
            return false;
        }
     } 
     if(sum<=thr){
        return true; 
     } 
     else{
        return false;
     }
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=-1; 
        int s=1; 
        int e=*max_element(nums.begin(),nums.end()); 
        int div = s+(e-s)/2; 
        while(s<=e){
            if(isAnswer(nums,threshold,div)){
                ans=div; 
                e=div-1;
            } 
            else{
                s=div+1;
            } 
            div=s+(e-s)/2; 
        } 
        return ans;
    }
};
