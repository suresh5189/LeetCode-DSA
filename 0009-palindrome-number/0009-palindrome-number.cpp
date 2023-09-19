class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rem=0, reverse=0;
        if(x<0) return false;
        while(x!=0){
            rem = x%10;
             x = x/10;
            if(reverse >= INT_MAX/10  || reverse<= INT_MIN/10){
                return 0;
            }
            reverse = reverse*10 + rem;
        }
        return (temp == reverse);
    }
};