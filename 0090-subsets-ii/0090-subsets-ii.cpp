class Solution {
public:
    void findSubset(int index,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
        ans.push_back(ds);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            findSubset(i+1,ds,ans,nums);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        findSubset(0,ds,ans,nums);
        return ans;
    }
};