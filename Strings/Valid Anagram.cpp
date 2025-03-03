class Solution { 
 
public:
    bool isAnagram(string s, string t) { 
    //O(nlogn)
    //  sort(s.begin(),s.end()); 
    //  sort(t.begin(),t.end());
    //    return  s==t ; 

    int freq[256]={0}; 
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    } 
    for(int i=0;i<t.length();i++){
        freq[t[i]]--;
    } 
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    } 
    return true;
    } 
};
