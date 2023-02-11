class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        int n=matrix[0].size()-1,m=matrix.size()-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }
        }
        return false;
    }
};

// YT : https://youtu.be/VS0BcOiKaGI
