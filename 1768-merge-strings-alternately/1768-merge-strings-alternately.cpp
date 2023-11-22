class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        int i=0,j=0;
        string res;
        while(i<l1 && j<l2){
            res = res + word1[i];
            res = res + word2[j];
            i++;
            j++;
        }
        while(j<l2){
            res = res + word2[j];
            j++;
        }
        while(i<l1){
            res = res + word1[i];
            i++;
        }
        return res;
    }
};