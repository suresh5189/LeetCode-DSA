class Solution {
public:
void findCombinations(int index,vector<int>&ds,vector<vector<int>>&ans,vector<int>&arr,int target){
    if(index == arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[index]<=target){
        ds.push_back(arr[index]);
        findCombinations(index,ds,ans,arr,target-arr[index]);
        ds.pop_back();
    }
    findCombinations(index+1,ds,ans,arr,target);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0,ds,ans,candidates,target);
        return ans;
    }
};