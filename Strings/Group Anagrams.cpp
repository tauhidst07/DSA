class Solution { 
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<std::array<int,26>,vector<string>> mp; 
       for(string str:strs){
         std::array<int,26> hash={0}; 
         for(int i=0;i<str.size();i++){
            hash[str[i]-'a']++;
         }
         mp[hash].push_back(str);
       } 
       vector<vector<string>> ans; 
       for(auto it:mp){
         ans.push_back(it.second);
       } 
       return ans;
    }
};
