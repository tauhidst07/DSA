int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here 
    int maxLen =0; 
    int right=0; 
    int left=0;  
    long long sum=a[0];
    int n = a.size(); 
    while(right < n){
        while(left<=right && sum > k){
            sum-=a[left]; 
            left++;
        } 
        if(sum == k){
            int len = right - left + 1; 
            maxLen = max(maxLen,len);
        } 
        right++; 
        if(right < n){
            sum+=a[right];
        }
    }  
    return maxLen;

}
