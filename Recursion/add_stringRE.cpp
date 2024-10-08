class Solution { 
    void solve(string& num1,string& num2,string& ans,int i,int j,int carry){
       if(i<0 && j<0){ 
          if(carry>0){
            ans+=carry+'0';
          }
          return;
       }   
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
         ans+=(sum%10)+'0'; 
         carry=sum/10;
       } 
       else{
         ans+=sum+'0';
       } 
       solve(num1,num2,ans,i-1,j-1,carry);
    
    }
public:
    string addStrings(string num1, string num2) {
       string ans="";  
       int i =num1.size()-1; 
       int j=num2.size()-1;
       solve(num1,num2,ans,i,j,0); 
       reverse(ans.begin(),ans.end()); 
       return ans;
    }
};
