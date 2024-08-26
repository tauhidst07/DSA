class Solution {
public:
    string removeOccurrences(string s, string part) { 
        int len=part.length();
        while(s.find(part)!=string::npos){
            int index=s.find(part); 
            s.erase(index,len);
            
        } 
        return s;
    }
};
