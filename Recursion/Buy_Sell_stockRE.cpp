class Solution { 
   int findMax(vector<int>& prices,int &profit,int& buy,int i){
       if(i>=prices.size()){
          return profit;
       } 
       if(prices[i]>buy){
          profit=max(profit,(prices[i]-buy));
       } 
       else{
        buy=prices[i];
       } 
       return findMax(prices,profit,buy,i+1);
   }
public:
    int maxProfit(vector<int>& prices) {
        // int profit =0; 
        // int buy=prices[0]; 
        // for(int sell : prices){
        //     if(sell>buy){
        //         profit=max(profit,sell-buy);
        //     }  
        //     else{
        //     buy=sell;
        //     }
        // } 
        // return profit; 
        int profit=0;  
        int buy=prices[0];
        return findMax(prices,profit,buy,0);
    } 


};
