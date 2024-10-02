class Solution { 
  
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq_map;  
        string ans;
        for(char c:s){
            freq_map[c]++;
        } 
        
        vector<pair<char,int>> char_freq(freq_map.begin(),freq_map.end()); 
      
       sort(char_freq.begin(), char_freq.end(),[](pair<char,int>p1,pair<char,int>p2){return p1.second > p2.second;});
        for(auto it:char_freq){
            int count=it.second; 
            while(count>0){
                ans+=it.first; 
                count--;
            }
        } 
        return ans;
    }
};
