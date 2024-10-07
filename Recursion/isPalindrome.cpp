class Solution { 


bool checkPalindrome(string &s,int left,int right){
    if(left>=right){
        return true;
    } 
    if(!isalnum(s[left])){
        return checkPalindrome(s,left+1,right);
    } 
    if(!isalnum(s[right])){
        return checkPalindrome(s,left,right-1);
    } 
    if(tolower(s[left])!=tolower(s[right])){
        return false;
    } 
    return checkPalindrome(s,left+1,right-1);
}

public:
    bool isPalindrome(string s) {
      return checkPalindrome(s,0,s.size()-1);
    }
};
