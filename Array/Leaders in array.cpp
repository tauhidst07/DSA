vector<int> superiorElements(vector<int>&a) {
    // Write your code here.  
    int n=a.size();
    int leader=a[n-1]; 
    vector<int> ans; 
    ans.push_back(leader); 
    for(int i=n-2;i>=0;i--){
        if(a[i]>leader){
            leader=a[i]; 
            ans.push_back(leader);
        }
    } 
    return ans;
}
