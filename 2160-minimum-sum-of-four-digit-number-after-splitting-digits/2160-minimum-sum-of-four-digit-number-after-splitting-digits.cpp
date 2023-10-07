class Solution {
public:
    int minimumSum(int n) {
        int arr[4] = {n/1000,(n/100)%10,(n/10)%10,n%10};
        sort(arr,arr+4);
        int ans = arr[0]*10+arr[1]*10+arr[2]+arr[3];
        return ans;
    }
};