class Solution { 
    int findWays(int n,vector<int>& memo){
           if(memo[n]!=-1){
            return memo[n];
           } 
           if(n==1 || n==0){
            return 1;
           } 
           memo[n] = findWays(n-1,memo)+findWays(n-2,memo); 
           return memo[n];
    }
public: 
    int climbStairs(int n) {
       vector<int> memo(n+1,-1); 
      int ways = findWays(n,memo); 
      return ways;
    }
};
