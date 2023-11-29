class Solution {
public:
    string categorizeBox(long int length, long int width, long int height, int mass) {
        string res="";
        long long vol= length*width*height;
        if(length>=10000 || width>=10000 || height>=10000 || vol>=1e9){
            if(mass>=100){
                res="Both";
                return res;
            }else{
                res="Bulky";
                return res;
            }
        }else{
            if(mass>=100){
                res="Heavy";
                return res;
            }else{
                res="Neither";
                return res;
            }
        }
        return res;
    }
};