  int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here 
        int n1=arr1.size(); 
        int n2=arr2.size(); 
        if(n1>n2){
            return kthElement(k,arr2,arr1);
        } 
        int s=0; 
        int e=n1;  
       
        while(s<=e){ 
             int l1=INT_MIN,l2=INT_MIN; 
             int r1=INT_MAX,r2=INT_MAX;
            int m1=(s+e)/2;  
            if(m1>k){
                e=m1-1; 
                continue;
            }
            int m2=k-m1; 
            if(m2>n2){
                s=m1+1; 
                continue;
            } 
            if(m1-1>=0) l1=arr1[m1-1]; 
            if(m2-1>=0) l2=arr2[m2-1]; 
            if(m1<n1) r1=arr1[m1]; 
            if(m2<n2) r2=arr2[m2]; 
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            } 
            else if(l1>r2){
                e=m1-1;
            } 
            else{
                s=m1+1;
            }
          
        } 
        return 0;
    }
