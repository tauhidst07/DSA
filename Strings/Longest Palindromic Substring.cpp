class Solution { 
    string PalindromicSubstr(string s,int i,int j){
       while(i>=0 && j<s.length() && s[i]==s[j]){
        i--; 
        j++;
       }   
       i++; 
       j--;
       string str="";  
       while(i<=j){
         str+=s[i]; 
         i++;
       }
       return str;
    }
public:
    string longestPalindrome(string s) {
        string max="";  
        string even=""; 
        string odd="";
        for(int i=0;i<s.length();i++){
            even=PalindromicSubstr(s,i,i); 
            odd=PalindromicSubstr(s,i,i+1); 
            if(even.length() > odd.length()){ 
              if( even.length()>max.length()){
                max=even;
              }
            } 
            else{
                if(odd.length()>max.length()) max=odd;
            }
        }  
        return max;
    }
};
