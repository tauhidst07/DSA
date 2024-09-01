class Solution {
public:
    int strStr(string haystack, string needle) {
       
       int m=haystack.size(); 
       int n=needle.size();
       for(int i=0;i<=m-n;i++){
        int index=0; 
        if(haystack[i]==needle[index]){
            while(index<n && haystack[i+index]==needle[index]){
                index++;
            } 
            if(index==n){
                return i;
            }
        }
       } 
       return -1;

    } 
};
