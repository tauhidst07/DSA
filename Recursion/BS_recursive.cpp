int BS(vector<int>&arr,int s,int e,int target){
  int mid = s+(e-s)/2;  
  if(s>e){
    return -1;
  }
  if(arr[mid]==target){
    return mid;
  } 
  else if(arr[mid]>target){
    e=mid-1; 
    return BS(arr,s,e,target);
  }   
  else{
  s=mid+1; 
  return BS(arr,s,e,target);
  }
  
}
int main() {  
   vector<int> arr{10,20,30,40,50,60}; 
  int target=5; 
  int s=0; 
  int e=arr.size()-1; 
  int ans=BS(arr,s,e,target); 
  cout<<ans;
   
}
