class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxIndex=0;
        int profit = 0;
        //()
        if(prices.size()==1){
            return 0;
        }
        for(int i =0;i<prices.size();i++){
            
            
            if(min>prices[i]){
                min = prices[i];
                
            }
            if(profit<(prices[maxIndex]-min)){
                profit=(prices[maxIndex]-min);
                
            }
            
            
            maxIndex++;
        }
        return profit;
    }
};
