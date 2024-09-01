class Solution { 
    int expandAroundIndex(string s,int i,int j){
        int count=0; 
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++; 
            i--; 
            j++;
        } 
        return count;
    }
public:
    int countSubstrings(string s) { 
        int n=s.length(); 
        int count=0; 
        for(int i=0;i<n;i++){
            int even=expandAroundIndex(s,i,i); 
            count+=even; 
            int odd=expandAroundIndex(s,i,i+1);  
            count+=odd;
        }
      return count;  
    }
};
