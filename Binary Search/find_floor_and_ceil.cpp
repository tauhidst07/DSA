
int getFloor(vector<int> &arr,int value){
  int s=0; 
  int e = arr.size()-1; 
  int m = s+(e-s)/2; 
  int ans=-1;
  while(s<=e){
	  if(arr[m]==value){
		  ans=arr[m]; 
		  break;
	  } 
	  else if(arr[m]>value){
		  e=m-1;
	  } 
	  else{
		  ans = arr[m]; 
		  s=m+1;
	  } 
	  m=s+(e-s)/2;
  } 
  return ans;
}
int getCeil(vector<int> &arr,int value){
  int s=0; 
  int e = arr.size()-1; 
  int m = s+(e-s)/2; 
  int ans=-1;
  while(s<=e){
	  if(arr[m]==value){
		  ans=arr[m]; 
		  break;
	  } 
	  else if(arr[m]>value){ 
		  ans = arr[m];
		  e=m-1;
	  } 
	  else{
		  s=m+1;
	  } 
	  m=s+(e-s)/2;
  } 
  return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here. 
	int floor=getFloor(a,x); 
	int ceil = getCeil(a,x);  
	pair<int,int> p = {floor,ceil}; 
	return p;
}
