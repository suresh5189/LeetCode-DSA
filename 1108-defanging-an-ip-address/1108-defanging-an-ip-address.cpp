class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(auto r : address){
            if(r == '.')
                s = s + "[.]";
            else
                s = s + r;
        } 
        return s;
    }
};