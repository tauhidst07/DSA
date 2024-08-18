class Solution { 
    long long findHour(vector<int>& piles,int hr){
        long long total=0; 
        for(int i=0;i<piles.size();i++){
            total+=ceil(double(piles[i])/double(hr)); 
        }   
        cout<<"rate: "<<hr<<endl;
        cout<<"total: "<<total<<endl; 

        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;  
        long long s=1; 
        long long e=*max_element(piles.begin(),piles.end()); 
        long long m=s+(e-s)/2; 
        while(s<=e){
            long long hour = findHour(piles,m); 
            if(hour<=h){ 
                cout<<m<<endl;
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
