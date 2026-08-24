class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,c=0;
        for(int r=1;r<prices.size();r++){
            
           if(prices[r]<prices[i]){
                i=r;
           }
            else if(prices[r]-prices[i]>c){
                c=prices[r]-prices[i];
                
            }
        }  
return c;  
        
    }
     
    };