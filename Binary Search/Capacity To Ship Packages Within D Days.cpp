class Solution { 
    bool isAnswer(vector<int>& weights,int days,int cap){
        int w=0; 
        for(int i=0;i<weights.size();i++){
            w+=weights[i]; 
            if(w>cap){
                w=weights[i]; 
                days--;
                if(days<1){
                    return false;
                }
            }
        } 
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=-1; 
        int s=*max_element(weights.begin(),weights.end()); 
        int e= accumulate(weights.begin(), weights.end(), 0); 
        int m=s+(e-s)/2; 
        while(s<=e){
            if(isAnswer(weights,days,m)){ 
                ans=m;
                e=m-1;
            } 
            else{
                s=m+1;
            } 
            m=s+(e-s)/2;
        }
        return m;
    }
};
