class Solution {
public:  
   void merge(vector<int>& nums,int s,int e){
    int m=s+(e-s)/2; 
    int s1=m-s+1; 
    int s2=e-m; 
    vector<int> left(s1); 
    vector<int>right(s2);  
    int k=s;
    for(int i=0;i<s1;i++){
        left[i]=nums[k++];
    } 
    for(int j=0;j<s2;j++){
        right[j]=nums[k++];
    } 
    int leftIndex=0; 
    int rightIndex=0;  
    int mainIndex=s;
    while(leftIndex<s1 && rightIndex<s2){
        if(left[leftIndex]<right[rightIndex]){
            nums[mainIndex++]=left[leftIndex++]; 
        } 
        else{
            nums[mainIndex++]=right[rightIndex++];
        }
    } 
    while(leftIndex<s1){
        nums[mainIndex++]=left[leftIndex++];
    } 
    while(rightIndex<s2){
        nums[mainIndex++]=right[rightIndex++];
    }
   }
   void mergeSort(vector<int>& nums,int s,int e){
      if(s>=e){
        return;
      } 
      int mid=s+(e-s)/2; 
      mergeSort(nums,s,mid); 
      mergeSort(nums,mid+1,e); 
      merge(nums,s,e);
   }
    vector<int> sortArray(vector<int>& nums) {  
        int s=0; 
        int e=nums.size()-1; 
        mergeSort(nums,s,e);
       return nums;
    }
};
