class Solution { 

public:
    bool isAlienSorted(vector<string>& words, string order) { 
        unordered_map<char,int> order_map; 
        for(int i=0;i<order.size();i++){
            order_map[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
           string curr=words[i]; 
           string next=words[i+1];  
           bool isValid=false;
           for(int j=0;j<curr.length();j++){
              if(j>=next.size()){
                return false;
              } 
              if(curr[j]!=next[j]){ 
                int pre = order_map[curr[j]]; 
                int nex = order_map[next[j]];  
                if(pre>nex){ 
                    return false;
                }  
                isValid=true;
                break;
              }
           } 
          
        } 
        return true;
    }
};
