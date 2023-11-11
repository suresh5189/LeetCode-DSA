class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }else{
                ans = ans + (count*(count+1)/2);
                count=0;
            }
        }
            if(count!=0){
                ans = ans + (count*(count+1)/2);
            }
        return ans;
    }
};