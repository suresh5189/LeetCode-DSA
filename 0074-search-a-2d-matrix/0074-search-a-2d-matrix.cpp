class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = matrix.size();
       int col = matrix[0].size();

       int start=0, end=(row*col)-1;
       while(start<=end){
           int mid = (start+end)/2;
           int mid_value = matrix[mid/col][mid%col];
           if(target == mid_value){
               return true;
           }
           else if(target>mid_value){
               start = mid+1;
           }
           else{
               end = mid-1;
           }
       }
       return false;
    }
};