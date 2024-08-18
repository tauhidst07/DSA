class Solution { 
    int dayRequire(vector<int>& bloomDay,int d,int m,int k){
        int flowers=0; 
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=d){
                flowers++; 
                if(flowers==k){
                    m--; 
                    flowers=0;
                }
            } 
            else{
                flowers=0;
            }
        } 
        if(m<=0){
            return 1;
        } 
        else{
            return -1;
        }
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=-1; 
        int s=*min_element(bloomDay.begin(),bloomDay.end()); 
        int e=*max_element(bloomDay.begin(),bloomDay.end()); 
        int day=s+(e-s)/2; 
        while(s<=e){
            if(dayRequire(bloomDay,day,m,k)==1){ 
                ans=day;
                e=day-1;
            }  
            else{
                s=day+1;
            }
          day=s+(e-s)/2;
        } 
        return ans;
    }
};
