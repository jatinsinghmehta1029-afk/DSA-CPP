class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a=digits.size()-1;
        while(a>=0){
            if(digits[a]!=9){
                digits[a]=digits[a]+1;
                break;}
            if(digits[a]==9){
                digits[a]=0;
                
            }
            a--;}
            if(digits[0]==0){
                digits.insert(digits.begin(),1);
            }
            
            
            
        return digits;
    }
};