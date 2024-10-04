
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
    // SORTED STRING AS KEY

    //     map<string,vector<string>> mp; 
    //     for(auto str:strs){
    //         string s = str; 
    //         sort(s.begin(),s.end()); 
    //         mp[s].push_back(str);
    //     }  
    //     vector<vector<string>> ans;
    //    for(auto it:mp){
    //       ans.push_back(it.second);
    //     } 
    //    return ans;

    // HASH OF STRING AS KEY 
    map<std::array<int,256>,vector<string>> mp; 
    for(auto str:strs){
      std::array<int,256> hash ={0}; 
      for(auto s:str){
        hash[s]++;
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
