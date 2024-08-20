#include <bits/stdc++.h>
int findStudents(vector<int>& arr,int p){
    int students=1; 
    long long pages=0;
    for (int i = 0; i < arr.size(); i++) { 
        if(pages+arr[i]<=p){
            pages+=arr[i];
        } 
        else{
            students++; 
            pages=arr[i];
        }
    } 
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here. 
    if(m>n){
        return -1;
    }   
    int s=*max_element(arr.begin(),arr.end()); 
    int e=accumulate(arr.begin(),arr.end(),0); 
    int p=s+(e-s)/2;  
    int ans=-1;
    while(s<=e){
        if(findStudents(arr,p)<=m){  
           
            ans=p;
            e=p-1;
        } 
        else {  
            s=p+1;
            
        } 
        p=s+(e-s)/2;
    } 
  return ans;
}
