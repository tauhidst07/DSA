class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans=""; 
        int i=num1.size()-1; 
        int j=num2.size()-1;  
        int carry=0; 
        
        while(i>=0 || j>=0){
            int sum=0;  
            sum+=carry; 
            carry=0; 
            if(i>=0){
            sum+=num1[i]-'0'; 
            } 
            if(j>=0){
            sum+=num2[j]-'0'; 
            }
            if(sum>9){
                int dig=sum%10; 
                 carry=sum/10; 
                 ans+=dig+'0';
            }   
            else{
                ans+=sum+'0';
            } 
            i--;j--;
        }    
        if(carry>0){
            ans+=carry+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
