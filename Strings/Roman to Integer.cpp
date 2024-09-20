class Solution { 
    int numberValue(char ch){
        if(ch=='I'){
            return 1; 
        } 
        if(ch=='V'){
            return 5; 
        } 
        if(ch=='X'){
            return 10;
        }  
        if(ch=='L'){
            return 50;
        }
        if(ch=='C'){
            return 100;
        } 
        if(ch=='D'){
            return 500;
        } 
        if(ch=='M'){
            return 1000;
        } 
      return 0;
    }
public: 
    int romanToInt(string s) {
        int number=0; 
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && s[i]=='I' && (s[i+1]=='V' ||s[i+1]=='X')){
              number+=numberValue(s[i+1])-numberValue(s[i]); 
              i++;continue;
            } 
            else if(i+1<s.size() && s[i]=='X' && (s[i+1]=='L' ||s[i+1]=='C')){
               number+=numberValue(s[i+1])-numberValue(s[i]); 
               i++;continue;
            } 
            else if(i+1<s.size() && s[i]=='C' && (s[i+1]=='D' ||s[i+1]=='M')){
               number+=numberValue(s[i+1])-numberValue(s[i]); 
               i++;continue;
            } 
            else{
                number+=numberValue(s[i]);
            }
        } 
        return number;
    }
};
