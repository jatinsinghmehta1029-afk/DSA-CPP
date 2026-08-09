class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;
        int v=x;
        while(x>0){
            int c=x%10;
            rev=rev*10+c;
            x=x/10;
        }
        return v==rev;


    }
};