class Solution {
public:
    string customSortString(string order, string s) {   

        //BRUTE FORCE

        // int repeat=0;
        // for(int i=0;i<order.length();i++){
        //     char target=order[i];  
        //     int targetIndex=i+repeat; 
        //     bool again=false;
        //         for(int j=0;j<s.length();j++){
        //             if(s[j]==target){
        //                 swap(s[j],s[targetIndex++]);  
        //                 if(again){
        //                     repeat++;
        //                 } 
        //                 again=true;
        //             }
        //         }
           
        // } 
        // return s; 

        // USINF MAP     
        unordered_map<char,int> freq_map; 
        string ans; 
        for(char ch:s){
            freq_map[ch]++;
        } 
        for(char ch:order){
            while(freq_map[ch]>0){
                 ans+=ch; 
                 freq_map[ch]--;
            }
        } 
        for(char ch:s){
             while(freq_map[ch]>0){
                 ans+=ch; 
                 freq_map[ch]--;
            }
        } 
        return ans;
    }
};
