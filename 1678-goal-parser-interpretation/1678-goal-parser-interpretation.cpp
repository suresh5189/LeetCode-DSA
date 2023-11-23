class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                res = res + "G";
            }
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    res = res + "o";
                }
                else if(command[i+1]=='a'){
                    res = res + "al";
                }
            }
        }
        return res;
    }
};