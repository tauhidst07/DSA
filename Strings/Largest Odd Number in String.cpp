class Solution {   
public:
    string largestOddNumber(string num) { 
       
       while(num.size()>0){
          if((num.back()-'0')&1){
            return num;
          } 
          num.erase(num.end()-1);
       }
        return num;
    }
};
