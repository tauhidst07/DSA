class Solution {
public:
    int reverse(int x) {
        int ans=0;  
        int flag=false;
        if(x<0){
            x=abs(x); 
            flag=true;
        }   
        while(x>0){
            int digit = x % 10; 
            if(ans > INT_MAX/10){
                ans=0; 
                break;
            } 
            ans = ans*10+digit; 
            x=x/10;
        }
        return flag ? -ans : ans;
    }
};
