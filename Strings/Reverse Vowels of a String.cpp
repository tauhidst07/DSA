class Solution { 
    bool isVowel(char ch){
    return (ch =='a' || ch =='e' || ch =='i' || ch == 'o' || ch == 'u' || ch =='A' || ch=='E' || ch =='I' || ch == 'O' || ch == 'U');
    }
public:
    string reverseVowels(string s) {
        int i=0; 
        int j=s.length()-1; 
        while(i<j){
            while(i<s.length() && !isVowel(s[i])){
                i++;
            } 
            while(j>=0 && !isVowel(s[j])){
                j--;
            }   
            if(i>=j){
                break;
            }
            char temp=s[i]; 
            s[i]=s[j]; 
            s[j]=temp;  
            i++; 
            j--;
        } 
        return s;
    }
};
