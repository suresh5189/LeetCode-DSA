class Solution {
public:
    void recuPermute(int index,vector<int>&nums,set<vector<int>>&ans){
        if(index==nums.size()){
            ans.insert(nums);
        }
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[index]) continue;
            swap(nums[index],nums[i]);
            recuPermute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        recuPermute(0,nums,ans);
        for(auto it:ans){
            vec.emplace_back(it);
        }
        return vec;
    }
};