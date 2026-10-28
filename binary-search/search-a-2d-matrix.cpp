class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if( matrix.empty()| matrix[0].empty()){
            return false;
        }
        int rows=matrix.size();
        int col=matrix[0].size();
        int left=0;
        int right=rows*col-1;
        while(left<=right){
            int mid=left +(right-left) /2;
            int midval=matrix[mid/col][mid%col];
            if(midval==target){
                return true;
            }
            else if(target>midval){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
        
    }
};