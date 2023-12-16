class Solution {
public:
    void findCombination(int index,vector<vector<int>>&ans,vector<int>&ds,int n,int k){
        if(ds.size() == k){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<=n;i++){
            ds.push_back(i);
            findCombination(i+1,ans,ds,n,k);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(1,ans,ds,n,k);
        return ans;
    }
};