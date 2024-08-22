class Solution { 
    int findIndex(vector<int>& arr,int x){
        int s=0; 
        int e=arr.size()-1; 
        int m=s+(e-s)/2; 
        while(s<=e){
            if(arr[m]==x){
                return m;
            } 
            else if(arr[m]>x){
                e=m-1;
            } 
            else{
                s=m+1;
            } 
            m=s+(e-s)/2;
        } 
        if(e<0){
            return s;
        } 
        if(s>=arr.size()){
            return e;
        } 
        if(abs(arr[s]-x) < abs(arr[e]-x)){
            return s;
        } 
        else{
            return e;
        }
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int ind=findIndex(arr,x); 
        vector<int> ans; 
        int lCount=0; 
        int rCount=0;   
        int count=1; 
        int n=arr.size();
        while(count!=k){
            if(ind-lCount-1<0){
                rCount+=k-count; 
                break;
            } 
            if(ind+rCount+1>=n){
                lCount+=k-count; 
                break;
            }  
            if(abs(arr[ind-lCount-1]-x)<abs(arr[ind+rCount+1]-x)){
                lCount++; 
                count++; 
                if(count==k){
                break;
                }
            }  
            else if(abs(arr[ind-lCount-1]-x)==abs(arr[ind+rCount+1]-x)){
                    lCount++;
                count++; 
                if(count==k){
                break;
                }
            } 
            else{
                     rCount++; 
                     count++; 
                if(count==k){
                break;
                }
            }

        }  
        cout<<"left "<<ind-lCount<<endl; 
        cout<<"right"<<ind+rCount<<endl; 
        for(int i=ind-lCount;i<=ind+rCount;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
