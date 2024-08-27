class Solution { 
    string findPrefix(string str,string pre){ 
        string newPre="";
        if(str==pre){
            return pre;
        }  

        else{
            for(int i=0;i<pre.length();i++){
                if(pre[i]==str[i]){
                    newPre+=pre[i];
                } 
                else{
                    break;
                }
            } 
        } 
        return newPre;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0]; 
        for(int i=1;i<strs.size();i++){
            pre=findPrefix(strs[i],pre); 
            if(pre.length()==0){
                return pre;
            }
        } 
        return pre;
    }
};
