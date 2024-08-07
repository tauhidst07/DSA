    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
       map<long long,int>totalSum; 
       long long sum=0; 
       int maxLen=0;
       for(int i=0;i<N;i++){
           sum+=A[i]; 
           if(sum==k){
               maxLen=max(maxLen,i+1);
           }  
               
        long long rem = sum -k;  
        if(totalSum.find(rem) != totalSum.end()){ 
            int len = i-totalSum[rem];
            maxLen = max(maxLen,len);
        } 
        
         if(totalSum.find(sum) == totalSum.end()){
             totalSum[sum]=i;
         }      
           
       } 
       return maxLen;
    }  

};
