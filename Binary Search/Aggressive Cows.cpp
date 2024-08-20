bool isAnswer(vector<int> &stalls,int d,int k){
     int curr=stalls[0];
     k--; 
     for(int i=1;i<stalls.size();i++){
         if(abs(stalls[i]-curr)>=d){ 
             curr=stalls[i];
             k--; 
             if(k==0){
                 return true;
             }
         } 
     } 
     if(k>0){
         return false;
     } 
     else{
         return true;
     }
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.   
    sort(stalls.begin(),stalls.end());
    int s=1; 
    int e=*max_element(stalls.begin(),stalls.end())-*min_element(stalls.begin(),stalls.end()); 
    int m=s+(e-s)/2;  
    int ans=-1;
    while(s<=e){
        if(isAnswer(stalls,m,k)){
            ans=m; 
            s=m+1;
        } 
        else{
            e=m-1;
        } 
        m=s+(e-s)/2; 
    } 
    return ans;

}
