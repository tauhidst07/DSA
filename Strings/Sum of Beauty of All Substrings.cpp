class Solution { 
  
public:
    int beautySum(string s) {
       if(s.size()<3){
        return 0;
       }  
       int total=0;
       for(int i=0;i<s.size();i++){
           vector<int> freq(26,0); 
           for(int j=i;j<s.size();j++){
            freq[s[j]-'a']++;
            int minFreq=s.size(); 
            int maxFreq=0;  
            for(int k=0;k<26;k++){
                if(freq[k]>0){
                    minFreq=min(minFreq,freq[k]); 
                    maxFreq=max(maxFreq,freq[k]);
                }
            } 
            total+=(maxFreq-minFreq);  
    
             }
       }
       return total;
    } 
};
