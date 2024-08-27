class Solution { 
    bool isLetter(char ch){
        return ((ch>=65 && ch<=90) || (ch>=97 && ch<=122));
    }
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1; 
        while(i<=j){
            if(!isLetter(s[i])){
                i++;
                continue;
            } 
            if(!isLetter(s[j])){
                j--; 
                continue;
            } 
            swap(s[i],s[j]); 
            i++; 
            j--;
        } 
        return s;
    }
};
