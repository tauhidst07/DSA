class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;   
        string ansStr="";
        for(int num:nums){  
           ans.push_back(to_string(num));
        } 
        sort(ans.begin(),ans.end(),[](string first,string second){
            return first+second > second + first;
        });  
        if(ans[0]=="0"){
            return "0";
        }
        for(string val:ans){ 
            ansStr+=val;
        }
        return ansStr;
    } 

};
