class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int tail = s.length()-1;
        while(tail>=0 && s[tail]==' ') tail--;
        while(tail>=0 && s[tail]!=' '){
            count++;
            tail--;
        }
        return count;
        
    }
};