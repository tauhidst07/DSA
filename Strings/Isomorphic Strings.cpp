class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int table[256]={0}; 
        int isMapped[256]={0}; 
         for(int i=0;i<s.length();i++){ 
           if(table[s[i]]==0 && isMapped[t[i]] == 0){
              table[s[i]]=t[i];
              s[i]=t[i];  
              isMapped[t[i]]++;
           }  
           else{ 
             if(table[s[i]]!=0){ 
                s[i]=table[s[i]];
             } 
             else{
                return false;
             }
           }
        } 
        return s==t;
    }
};
