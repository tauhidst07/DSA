class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";   
        int index=0;
        int par=0; 
        for(int i=0;i<s.length();i++){
           if(s[i]=='('){
            par++; 
            if(par>1){
                s[index++]='(';
            }
           } 
           if(s[i]==')'){
            par--; 
            if(par>0){
                s[index++]=')';
            }
           }
        }   
        if(index<s.size()){
        s.erase(index);
        }
        return s;

    }  
};
