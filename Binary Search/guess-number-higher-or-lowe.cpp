class Solution {
public:
    int guessNumber(int n) {
      int s,e,num; 
      s=1; 
      e=n; 
      num = s+(e-s)/2; 
      while(guess(num)!= 0){
       if (guess(num) == 1){
        s = num +1;
       }  
       else if(guess(num)==-1){
        e = num -1;
       } 
       num = s+(e-s)/2;
      } 

      return num; 

    }
};
