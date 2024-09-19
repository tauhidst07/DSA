class Solution { 
    bool isChar(char ch){
        return ch==' ';
    }
public:
    string reverseWords(string str) {
        string ans=""; 
        string start=""; 
        for(int i=str.size()-1;i>=0;i--){
            if(!isChar(str[i])){
                start+=str[i]; 
            } 
            if(start!="" && str[i]==' '){ 
                reverse(start.begin(),start.end());
                ans+=start+" ";  
                start="";
            }
        }  
        if(start!=""){
            reverse(start.begin(),start.end()); 
            ans+=start+" ";  
        } 
        if(ans[ans.size()-1]==' '){
            ans.erase(ans.end()-1);
        }
        return ans;
    }
};
