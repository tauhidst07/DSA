int longestSuccessiveElements(vector<int>&a) {
    // Write your code here. 
    int longest=0; 
     unordered_map<int,int> mp; 
     for(int i=0;i<a.size();i++){
         mp[a[i]]=i;
     } 
     for(int i=0;i<a.size();i++){  
         if(mp.find(a[i]-1)==mp.end()){
         int count=0;   
         int value=1;
         while(mp.find(a[i]+value)!=mp.end()){
             count++;  
             value++;
             
         } 
         longest=max(count,longest); 
        }
     }
    return longest+1;
}
